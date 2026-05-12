#include <stdio.h>

int binarysearch(int arr[], int size, int key){
int low = 0, high = size - 1, mid;

while(low <= high){
	mid = (low + high) / 2;
	
	if(arr[mid] == key){
		return mid;
	}
	else if(arr[mid] < key){
		low = mid + 1;
	}
	else {
		high = mid - 1;
		}
    }
    return -1;
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = sizeof(arr) / sizeof(arr[0]);
	int key, result;
	
	printf("Enter the elements to search:");
	scanf("%d", &key);
	
	result = binarysearch(arr, size, key);
	
	if (result != -1)
	printf("Element found at the index %d\n", result);
	
	else
	printf("Element not found");
	
	return 0;
}
