#include "libmx.h"

static int partition(int *arr, int left, int right, int *swap) {
    int pivot = arr[right];
    int i = left;
    int j = right;

    while (i < j) {
        while (arr[i] < pivot)
            i++;
        while (arr[j] >= pivot && j > left)
            j--;
        if( i < j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            (*swap)++;
        }
    }
    if (arr[right] < arr[i]) {
    int temp = arr[i];
    arr[i] = arr[right];
    arr[right] = temp;
    (*swap)++;
    }
    return j;
}

int mx_quicksort(int *arr, int left, int right) {
    if (!arr)
        return -1;
    int swaps = 0;

    if (left < right) {
        int piv = partition(arr, left, right, &swaps);
        swaps += mx_quicksort(arr, left, piv);
        swaps += mx_quicksort(arr, piv+1, right);
    }
        return swaps;
}
