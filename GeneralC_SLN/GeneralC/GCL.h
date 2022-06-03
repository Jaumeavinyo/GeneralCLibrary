#ifndef GCL_H
#define GCL_H
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#define usint unsigned short int



namespace gcl {

	//TOOLS

	void printIntArray(int* arr, int size) {

		for (usint i = 0; i < size; i++) {
			std::printf("/n %i", arr[i]);
		}
	}



	//SORTING ALGORITHMS

	//INSERTION SORT
	//Insertion Sort goes throw all numbers in an array and compare them to the 
	//previous number. If the previous number is bigger, it changes both numbers position.

	void insertionSort(int* arr, int size) {
		int numCopy;
		usint j, i;

		for (i = 1; i < size; i++) {
			numCopy = arr[i];
			j = i - 1;
			while (j > 0 && arr[j] > numCopy) {
				arr[j + 1] = arr[j];
				j -= 1;
			}
			arr[j + 1] = numCopy;
		}
	}

	
	char* concatenateStrings( char* s1, char* s2)  {
		
		return strcat(s1, s2);
	}
	


}







#endif
