#ifndef INSERTION_SORT
#define INSERTION_SORT

#define usint unsigned short int

#include <cstdio>


//Insertion Sort goes throw all numbers in an array and compare them to the 
//previous number. If the previous number is bigger, it changes both numbers position.

void insertionSort(int *arr,int size);

void insertionSort(int* arr, int size) {

	int numCopy;
	usint j, i;
	for (i = 1; i < size; i++) {
		numCopy = arr[i];
		j = i - 1;
		while( j > 0 && arr[j] > numCopy) {
			arr[i] = arr[j];
			j -= 1;
		}
		arr[j+1] = numCopy;
	}
}

void printInsertionSortResults(int *arr, int size);
void printInsertionSortResults(int *arr, int size) {

	for (usint i = 0; i < size; i++) {
		printf("\n %i", arr[i]);
	}
}

#endif INSERTION_SORT
