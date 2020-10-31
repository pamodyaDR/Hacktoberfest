
#include <stdio.h> 

void swap(int *x, int *y) 
{ 
	int temp = *x; 
	*x = *y; 
	*y = temp; 
} 


void bubbleSort(int arrB[], int n) 
{ 
int i, j; 
for (i = 0; i < n-1; i++)	 

	
	for (j = 0; j < n-i-1; j++) 
		if (arrB[j] > arrB[j+1]) 
			swap(&arrB[j], &arrB[j+1]); 
} 





int main() 
{ 
	int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	bubbleSort(arr, n); 
	printf("Sorted array: \n"); 
	
  int i; 
	for (i=0; i <n; i++) 
		printf("%d ", arr[i]); 
	printf("\n");
	return 0; 
} 
