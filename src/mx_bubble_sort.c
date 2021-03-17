#include "libmx.h"

int mx_bubble_sort(int *arr, int size) {
    int swaps = 0;
    int temp;
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swaps++;
            }
        }
    }
    return swaps;
}
