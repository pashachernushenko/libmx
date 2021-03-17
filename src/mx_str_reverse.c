#include "libmx.h"

void mx_str_reverse(char *s) {
    if (!s)
        return;
    //first and last indices
    int front = 0;
    int back = mx_strlen(s) - 1;
    int half = mx_strlen(s)/2;

    //loop to half and swap
    while (front < half)
        mx_swap_char(&s[front++], &s[back--]);
}
