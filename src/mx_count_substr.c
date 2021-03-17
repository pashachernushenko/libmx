#include "libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    if (str == NULL || sub == NULL)
        return -1;
    //if empty string
    if(*sub == '\0')
        return 0;
    int cnt = 0;
    //find len of s2
    int len_2 = mx_strlen(sub);
    while (*str != '\0') {
    //if first letter matches, check sequence
    if(*str == *sub) {
        if(!mx_strncmp(str, sub, len_2))
            cnt++;
    }
    str++;
    }
    return cnt;
}
