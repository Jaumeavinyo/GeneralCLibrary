
#include "GCL.h"
using namespace gcl;
//here you can test all Library functionalities

int main() {

	//insertion sort 
	/*
	int arr[10] = { 1,4,2,6,4,8,2,2,6,5 };
	int arrSize = sizeof(arr) / sizeof(arr[0]);
	gcl::insertionSort(arr, arrSize);
	gcl::printIntArray(arr, arrSize);
	*/
	char in1 { 'h' };
	char in2 { 'o' };
	char* s1 = &in1;
	char* s2 =  &in2;
	char* s3 = concatenateStrings(s1, s2);
	std::cout << s3 << "s";
	return 0;
}