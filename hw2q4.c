#include<stdio.h>

int _Z5proc1Piii(int* arr, int length, int num) {
	// length = 100, num = 7
	int iters, count, index, lastTaken;
	index = 0;
	lastTaken = 0;
	iters = 0;
	while (iters < length) {
		// find the num-th 'non-zero' index
		count = 1;
		// find (num-1)-th 'non-zero' index, and set index to the next
		while (count < num) {
			// find the first index 'index' where arr[index] != 0
			while (arr[index] == 0) {
				index = (index + 1) % length;
			}
			
			count++;
			// index is the next of the first 'non-zero' index
			index = (index + 1) % length;
		}
		// find the first 'non-zero' index after (num-1)-th 'non-zero' index
		while (arr[index] == 0) {
			index = (index + 1) % length;
		}
		
		lastTaken = arr[index];
		arr[index] = 0;
		iters++; 
	}
	
	return lastTaken;
}

int main(void) {
	int arr[100];
	int num = 7, length = 100, i = 0;
	// arr: 1 ~ 100
	while (i < length) {
		arr[i] = i + 1;
		i++;
	}
	
	printf("%d", _Z5proc1Piii(arr, length, num));
	return 0;
}
