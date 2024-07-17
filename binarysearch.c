#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + ((right - left) / 2);
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) left = mid + 1;
	else right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = -4;
    int result = binarySearch(arr, n, x);
    if (result != -1) printf("Element is present at index %d\n", result);
    else printf("Element is not present in array\n");
    return 0;
}
