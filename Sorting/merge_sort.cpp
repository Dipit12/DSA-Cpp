#include <iostream>
using namespace std;

void merge(int arr[], int beginIndex, int mid, int endIndex) {
    int output[endIndex - beginIndex + 1];
    int i = beginIndex;
    int j = mid + 1;
    int k = 0;

    // Merge the two halves into the output array
    while (i <= mid && j <= endIndex) {
        if (arr[i] < arr[j]) {
            output[k] = arr[i];
            i++;
        } else {
            output[k] = arr[j];
            j++;
        }
        k++;
    }

    // Copy any remaining elements from the left half
    while (i <= mid) {
        output[k] = arr[i];
        i++;
        k++;
    }

    // Copy any remaining elements from the right half
    while (j <= endIndex) {
        output[k] = arr[j];
        j++;
        k++;
    }

    // Copy the sorted output back into the original array
    for (int m = 0; m < k; m++) {
        arr[beginIndex + m] = output[m];
    }
}

void mergeSort(int arr[], int beginIndex, int endIndex) {
    if (beginIndex >= endIndex) {
        return;
    }
    int mid = (beginIndex + endIndex) / 2;

    // Recursively divide and sort the array
    mergeSort(arr, beginIndex, mid);
    mergeSort(arr, mid + 1, endIndex);

    // Merge the sorted halves
    merge(arr, beginIndex, mid, endIndex);
}

int main() {
    int arr[] = {34, 321, 53, 1, 3};
    int size_arr = sizeof(arr) / sizeof(arr[0]);

    // Call merge sort
    mergeSort(arr, 0, size_arr - 1);

    // Print the sorted array
    for (int i = 0; i < size_arr; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
