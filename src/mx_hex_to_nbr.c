#include "libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {
    unsigned long res = 0;
    unsigned short digit = 0;

    if (hex == NULL)
        return 0;

//loop over string
    while (*hex != '\0') {
//figure out nubmer
        if (mx_isdigit(*hex))
            digit = *hex - 48;
        else if ((*hex >= 'A') && (*hex <= 'F'))
            digit = *hex - 55;
        else if ((*hex >= 'a') && (*hex <= 'f'))
            digit = *hex - 87;
        else
            return 0;
//append
        res = (res << 4) | digit;
        hex++;
    }
    return res;
}
