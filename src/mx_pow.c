#include "libmx.h"

double mx_pow(double n, unsigned int pow) {
    double num = 1;

    if (pow == 0) 
        return 1.0;
    else {
        for ( ; pow >= 1; pow--) 
            num *= n;
        return num;
    }
}
