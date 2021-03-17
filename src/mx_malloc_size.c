#include "libmx.h"
/*--- by:
https://stackoverflow.com/users/1424877/quuxplusone
----*/

#if defined(__linux__)
size_t mx_malloc_size(void *p) {
    return malloc_usable_size((void*)p);
}
#elif defined(__APPLE__)
size_t mx_malloc_size(void *p) {
    return malloc_size(p);
}
#elif defined(_WIN32)
size_t mx_malloc_size(void *p) {
    return _msize((void *)p);
}
#else
#error "System is not supported"
#endif
