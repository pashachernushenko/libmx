#include "libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {
    if (!big || !little || big_len == 0 || little_len == 0)
        return NULL;

    for (size_t i = 0; i < big_len; i++) {
        if (((char*)big)[i] == *(char*)little) {
            if (!mx_memcmp(&((char*)big)[i], little, little_len))
                return (void*)&((char*)big)[i];
        }
    }
    return NULL;
}
