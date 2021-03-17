#include "libmx.h"

// char **mx_strsplit(const char *s, char c) {
//     if (s == NULL)
//         return NULL;

//     int wordsnum = mx_count_words(s, c);
//     int end = 0;
//     int word = 0;
//     char **res = (char**)malloc(sizeof(char*) * (wordsnum + 1));
//     if (res == NULL)
//         return NULL;
//     res[wordsnum] = NULL;

//     for (int start = 0; s[start] != '\0'; start++) {
//         if (s[start] == c)
//             continue;
//         end = mx_get_char_index(&s[start], c);
//         res[word++] = mx_strndup(&s[start], end);
//         start+=end;
//     }

//     return res;
// }

#include "libmx.h"

static int get_word_length(const char *s, char c) {
    int word_length = 0;
    char *copy_s = (char *)s;

    while ((*copy_s != c) && (*copy_s != '\0')) {
        word_length++;
        copy_s++;
    }
    return word_length;
}

char **mx_strsplit(const char *s, char c) {
    int word_length = 0;
    int i = 0;
    char **arr = NULL;

    if (!s)
        return NULL;
    arr = (char **)malloc((mx_count_words(s, c) + 1) * sizeof(char *));
    while ((*s) && (*s != '\0')) {
        if (*s != c) {
            word_length = get_word_length(s, c);
            arr[i] = mx_strndup(s, word_length);
            s += word_length;
            i++;
            continue;
        }
        s++;
    }
    arr[i] = NULL;
    return arr;
}
