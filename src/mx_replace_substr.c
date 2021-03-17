#include "libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
    if (!str || !sub || !replace)
        return NULL;

    int strnum = mx_count_substr(str, sub);
    int new_len = mx_strlen(str) + strnum * (mx_strlen(replace) - mx_strlen(sub)); 
    char *res = mx_strnew(new_len);
    int start = 0, i_orig = 0, i_sub = 0;

    for (; str[i_orig] != '\0'; i_orig += start + mx_strlen(sub)) {
        start = mx_get_substr_index(&str[i_orig], sub);
        if (start < 0) {
            mx_strcpy(&res[i_sub], &str[i_orig]);
            break;
        }
        mx_strncpy(&res[i_sub], &str[i_orig], start);
        mx_strcpy(&res[i_sub+start], replace);
        i_sub += start + mx_strlen(replace);
        }
    return res;
}
