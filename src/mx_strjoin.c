#include "libmx.h"

char *mx_strjoin(char const *s1, char const *s2) {
    //handling
    if (s1 == NULL && s2 == NULL)
        return NULL;
    if (s1 == NULL)
        return mx_strdup(s2);
    if (s2 == NULL)
        return mx_strdup(s1);
    
    //allocate memory for concatenated string
    char *concat = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
    //copy 1st string to memory
    concat = mx_strcpy(concat, s1);
    //do concantenation and return
    return mx_strcat(concat, s2);
}
