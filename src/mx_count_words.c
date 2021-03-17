#include "libmx.h"

int mx_count_words(const char *str, char delimiter) {
    if (str == NULL)
        return -1;
        
    int words_so_far = 0;
    bool word = false;

    while (*str != '\0') {
    //set flag and increment words;
        if(*str != delimiter && !word) {
            word = true;
            words_so_far++;
        }
    //reset flag
        if(*str == delimiter)
            word = false;
        str++;
    }
    return words_so_far;
}
