#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int arr[8] = {12, 15, 221, 3, 382, 54, 16, 67};
	int max = 0, i = 0;
	
	while (i <= 7) {
		if (arr[i] > max) {
			max = arr[i];
		}
		i++;
	}
	printf("%d", max);
	
	return 0;
}
