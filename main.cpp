#include <iostream>
#include <stdio.h>

int binarySearch(int arr[], int first, int last, int key)
{
    if(last >= first) {
	int mid = first + (last - first) / 2;
	if(arr[mid] == key) {
	    return mid;
	}
	if(arr[mid] > key) {
	    return binarySearch(arr, first, mid - 1, key);
	} else {
	    return binarySearch(arr, first, mid + 1, key);
	}
    }
    return -1;
}

int main(int argc, char** argv)
{
    int arr[] = { 10, 20, 30, 40, 50 };
    int key = 30;
    int last = *(&arr + 1) - arr;
    int result = binarySearch(arr, 0, last, key);
    if(result == -1)
	printf("Element is not found!");
    else
	std::cout << "Element is found at index: " << result << "\n"
	          << "\n";
}
