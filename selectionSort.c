// C program for implementation of selection sort 
#include <stdio.h> 

void swap(int *x, int *y) 
{ 
	int temp = *x; 
	*x = *y; 
	*y = temp; 
} 

void selectionSort(int arrS[], int n) 
{ 
	int i, j, min_idx; 


	for (i = 0; i < n-1; i++) 
	{ 
		
		min_idx = i; 
		for (j = i+1; j < n; j++) 
		if (arrS[j] < arrS[min_idx]) 
			min_idx = j; 

		swap(&arrS[min_idx], &arrS[i]); 
	} 
} 



int main() 
{ 
	int arr[] = {64, 25, 12, 22, 11}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	selectionSort(arr, n); 
	printf("Sorted array: \n"); 
	
	int i; 
	for (i=0; i <n; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
	 
	return 0; 
} 
