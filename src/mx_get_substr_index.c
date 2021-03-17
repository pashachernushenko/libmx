#include "libmx.h"
#include <string.h>

int mx_get_substr_index(const char *str, const char *sub) {
    int cnt = 0;

    if (str == NULL || sub == NULL)
        return -2;

    while (str[cnt] != '\0') {
        //search for first occurence
        if (str[cnt] == *sub) {
            //compare string
            if(!mx_strncmp(&(str[cnt]), sub, mx_strlen(sub)))
                return cnt;
        }
        cnt++;
    }
    return -1;
}
