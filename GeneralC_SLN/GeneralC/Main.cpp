
#include "InsertionSort.h"

//here you can test all Library functionalities

int main() {


	int arr[10] = { 3,4,2,6,4,8,2,2,6,5 };
	int arrSize = sizeof(arr) / sizeof(arr[0]);
	insertionSort(arr, arrSize);

	printInsertionSortResults(arr, arrSize);

	int a;

	return 0;
}