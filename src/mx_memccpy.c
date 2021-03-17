#include "libmx.h"

void *mx_memccpy(void *restrictdst, const void *restrictsrc, int c, size_t n) {
    for (size_t i = 0; i < n; i++) {
        ((char*)restrictdst)[i] = ((char*)restrictsrc)[i];
        if (((char*)restrictsrc)[i] == (char)c)
            return (void*)&((char*)restrictdst)[i+1];
    }
    return NULL;
}
