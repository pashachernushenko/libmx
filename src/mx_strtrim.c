#include "libmx.h"

char *mx_strtrim(const char *str) {
    if (str == NULL)
        return NULL;
    //search where sting starts
    int start = 0;
    for ( ; mx_isspace(str[start]); start++);
    //search where string ends
    int end = mx_strlen(str) - 1;
    for ( ; mx_isspace(str[end]); end--);
    //new string length
    if (end < 0)
        end = start;
    int len = end - start + 1;
    char *trimmed = mx_strnew(len);

    if (trimmed == NULL)
        return NULL;
    //copy string
    trimmed = mx_strncpy(trimmed, &str[start], len);
    return trimmed;
}
