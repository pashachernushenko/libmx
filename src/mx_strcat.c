#include "libmx.h"

char *mx_strcat(char *s1, const char *s2) {
    int i = 0;
    //find end of s1
    while (s1[i] != '\0')
        i++;
    mx_strcpy(&s1[i], s2);
    return s1;
}
