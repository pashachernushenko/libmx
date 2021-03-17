#include "libmx.h"

char *mx_strdup(const char *str) {
    //allocate memory for new string
    char *cpy = mx_strnew(mx_strlen(str));
    if (cpy == NULL)
        return NULL;
    //copy and return
    return mx_strcpy(cpy, str);
}
