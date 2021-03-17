#include "libmx.h"

char *mx_strnew(const int size) {
    //handler
    if (size < 0)
        return NULL;
    //allocate memory
    char *ptr = (char*)malloc(sizeof(char) * (size + 1));
    if (ptr == NULL)
        return NULL;
    //fill up with \0
    for (int i = 0; i <= size; i++)
        ptr[i] = '\0';
    return ptr;
}
