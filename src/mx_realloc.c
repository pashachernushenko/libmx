#include "libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    void *new = NULL;
    if (size < malloc_size(ptr))
        new = malloc(malloc_size(ptr));
    else
        new = malloc(size);

    if (new == NULL)
        return NULL;

    mx_memcpy(new, ptr, malloc_size(ptr));
    free(ptr);
    ptr = NULL;
    return new;
}
