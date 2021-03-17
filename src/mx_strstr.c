#include "libmx.h"

char *mx_strstr(const char *s1, const char *s2) {
    //if empty string
    if(*s2 == '\0')
        return (char*)s1;
    //find len of s2
    int len_2 = mx_strlen(s2);
    while (*s1 != '\0') {
    //if first letter matches, check sequence
    if(*s1 == *s2) {
        if(!mx_strncmp(s1, s2, len_2))
            return (char*)s1;
    }
    s1++;
    }
    return NULL;
}
