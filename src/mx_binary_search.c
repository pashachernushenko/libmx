#include "libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    //starting
    int first = 0;
    int last = size - 1;
    int middle = (first + last) / 2;

    while (first <= last) {
        *count += 1;

        if (mx_strcmp(arr[middle], s) == 0)
            return middle;
        else if (mx_strcmp(arr[middle], s) > 0)
            last = middle - 1;
        else
           first = middle + 1;

        middle = (first + last) / 2;
    }
    //if not found
    *count = 0;
    return -1;
}
