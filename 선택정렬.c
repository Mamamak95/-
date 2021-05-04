#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)


int main() {
	int temp;
	int arr[7];
	int min;
	int minNum=0;
	
	printf("array num\n");

	for (int i = 0; i < 7; i++) {
		
		printf("%d ", 1+i);
		scanf("%d", &temp);
		arr[i] = temp;

	}
	
	for (int u = 0; u < 7; u++) {
		printf("%d ", arr[u]);
	}
	printf("\n");


	for (int j = 0; j < 7; j++) {
		int k = j;
		min = arr[k];
		minNum = k;
		for (k = j; k < 7; k++) {

			if (min > arr[k]) {
				
				min = arr[k];
				minNum = k;
			}

		}
		
		temp = arr[j];
		arr[j] = min;
		arr[minNum] = temp;
		for (int u = 0; u < 7; u++) {
			printf("%d ", arr[u]);
		}
		printf("\n");


	}
	
	for (int i = 0; i < 7; i++) {
		printf("%d ", arr[i]);
	}
	//배열 표시
	return 0;

}
