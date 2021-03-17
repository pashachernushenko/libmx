#include "libmx.h"

int mx_atoi(const char *str) {
    int res = 0;
    int sign = 1;
    int dig = -1;

    for( ; (*str != '\0') && (dig != 0); str++) {
        //check for sign
        if(*str == '-' && mx_isdigit(*(str+1)))
            sign = -1;
        //find a number
        if(mx_isdigit(*str)) {
            dig = 1;
            res = res * 10 + (*str - '0');
        }
        if (!mx_isdigit(*str) && dig == 1)
            dig = 0;
    }
    return res*sign;
}
