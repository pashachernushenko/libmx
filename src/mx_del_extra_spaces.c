#include "libmx.h"

char *mx_del_extra_spaces(const char *str) {
    if (str == NULL)
        return NULL;

    int j = 0;
    char *trimmed = mx_strtrim(str);
    char *del = mx_strnew(mx_strlen(trimmed));
    if (del == NULL)
        return NULL;

    for (int i = 0; trimmed[i] != '\0'; i++) {
        if (mx_isspace(trimmed[i]))
            for (del[j++] = ' '; mx_isspace(trimmed[i]); i++);
        del[j++] = trimmed[i];
    }

    char *res = mx_strnew(mx_strlen(del));
    if (res == NULL)
        return NULL;
    mx_strcpy(res, del);
    mx_strdel(&trimmed);
    mx_strdel(&del);
    return res;
}
