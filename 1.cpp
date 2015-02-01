#include <iostream>
using namespace std;

// Q. 16.1: “Given a sorted array of positive integers with an empty spot (zero) at the end, insert an element in sorted order.”

void SortArray(int arr[], int n){
	//Given array of ints arr insert element n in sorted order
	cout << "The size of the array is " << sizeof(arr)-1 << endl;

	//Print original array
		
        cout << "Starting array:{";
	for(int i = 0; i < sizeof(arr)-1 ; i++){
        cout << arr[i] << " ";
        }
        cout << "}" << endl;

	if(arr[sizeof(arr)-1] != 0 || n < 0){
		cout << "input is incorrect. Please enter a positive number" << endl;
		return;
	}

	//Number and array are valid

	int index = sizeof(arr) - 3; // start from 2nd to last
   	while (index >= 0 && arr[index] > n) {
	// shift over one
     	arr[index+1] = arr[index]; 
     
     	// move to next element
     	index = index - 1; 
   	}
   	//Insert element
   	arr[index+1] = n;

	//Print out new array
	cout << "Finished array:{";
	for(int i = 0; i < sizeof(arr)-1 ; i++){
		cout << arr[i] << " ";
	}
	cout << "}" << endl;
};

int main(){
	
	int a[] = {1, 3, 5, 7, 9, 11, 0};
	int num; 
	cout << "Q. 16.1: Given a sorted array of positive integers with an empty spot (zero) at the end, insert an element in sorted order." << endl;
	cout << "Enter a number to insert: ";
	cin >> num;
	SortArray(a,num); 
	
}
