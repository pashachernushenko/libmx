#include "libmx.h"

int mx_get_char_index(const char *str, char c) {
    int cnt = 0;

    if (str == NULL)
        return -2;
    
    while (str[cnt] != '\0') {
        if (str[cnt] == c)
            return cnt;
        cnt++;
    }
    return -1;
}
