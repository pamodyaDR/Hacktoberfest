 /* C implementation QuickSort */
#include<stdio.h> 

//A function to swap two elements 
void swap(int* num1, int* num2) 
{ 
	int temp = *num1; 
	*num1 = *num2; 
	*num2 = temp; 
} 


int partition (int arr[], int low, int high) 
{ 
	int pivot = arr[high]; 
	int i = (low - 1);
	int j;

	for ( j = low; j <= high- 1; j++) 
	{ 
		
		if (arr[j] < pivot) 
		{ 
			i++; 
			swap(&arr[i], &arr[j]); 
		} 
	} 
	swap(&arr[i + 1], &arr[high]); 
	return (i + 1); 
} 


void quickSort(int arrS int low, int high) 
{ 
	if (low < high) 
	{ 
		
		int pi = partition(arr, low, high); 

		
		quickSort(arrS, low, pi - 1); 
		quickSort(arrS, pi + 1, high); 
	} 
} 





int main() 
{ 
	int arr[] = {10, 7, 8, 9, 1, 5}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	quickSort(arr, 0, n-1); 
	printf("Sorted array: \n"); 
		int i; 
	for (i=0; i <n; i++) 
		printf("%d ", arr[i]); 
	printf("\n");  
	return 0; 
} 
