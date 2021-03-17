#include "libmx.h"

int mx_sqrt(int x) {
    if (x <= 0)
        return 0;

    int pow = 0;

    for (int i = 1; i < INT_MAX; i++) {
        pow = i*i;
        if(pow == x)
            return i;
        if (pow > x)
            return 0;
    }
    return 0;
}
