#include <iostream>
using namespace std;


/*
Exercise 2: Write a program that accepts elements for 2
arrays and merge the elements into another array in
descending order. Assume that each array can take up to 10
elements.

*/

const int SIZE1 = 10;
const int SIZE2 = 10;
const int MERGED_SIZE = SIZE1 + SIZE2;
int firstArray[SIZE1];
int secondArray[SIZE2];	
int mergedArray[MERGED_SIZE];

void getFirstArrayElements(){

	// user input for the 10 elements for the first array
	cout << "Enter 10 elements for the First Array: " << endl;
	
	for (int i = 0; i < SIZE1; ++i) {
		
		cout << "Enter Element " << i + 1 << ": ";
		cin >> firstArray[i];
		
	}
	
}

void getSecondArrayElements(){
	
	// user input for the 10 elements for the second array
	cout << "\nEnter 10 elements for the Second Array: " << endl;
	
	for (int i = 0; i < SIZE2; ++i) {
		
		cout << "Enter Element " << i + 1 << ": ";
		cin >> secondArray[i];
		
	}
	
}

void mergeArrays (){
	
	// Copy elements from the first array to the merged array
	for (int i = 0; i < SIZE1; ++i) {
		
		mergedArray[i] = firstArray[i];
		
	}
	
	// Copy elements from the second array to the merged array, after the first array's elements
	for (int i = 0; i < SIZE2; ++i) {
		
		mergedArray[SIZE1 + i] = secondArray[i];
		
	}
	
	
}

void sortDescending(){
	
	//sort the array in descending order
    for (int i = 0; i < MERGED_SIZE - 1; ++i) {
        for (int j = 0; j < MERGED_SIZE - i - 1; ++j) {
            if (mergedArray[j] < mergedArray[j + 1]) {
            	
                // Swap elements if the current element is less than the next element
                int temp = mergedArray[j];
                mergedArray[j] = mergedArray[j + 1];
                mergedArray[j + 1] = temp;
            }
        }
    }
}

void printSortedArray(){
    cout << "\nMerged Array in Descending Order: ";
    for (int i = 0; i < MERGED_SIZE; ++i) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;
}

int main(){
	
	getFirstArrayElements();
	getSecondArrayElements();
	mergeArrays();
	sortDescending();
	printSortedArray();

	return 0;

}


/* post checking: do not use global variables updated file 
> Pinca-Jeanne-Basics-And-Fundamentals_another attempt
> always put validation

*/