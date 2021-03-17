#include "libmx.h"

char *mx_file_to_str(const char *file) {
    int size = 0;
    char buff;
    //detect length
    int fd = open(file, O_RDONLY);
    if (fd == -1)
        return NULL;
    while (read(fd, &buff, sizeof(buff)) != 0)
        size++;
    close(fd);
    if (size <= 0)
        return NULL;
    //allocate string
    char *str = (char*)malloc((size + 1) * sizeof(char));
    if (str == NULL)
        return NULL;
    fd = open(file, O_RDONLY);
    if (fd == -1)
        return NULL;
    read(fd, str, size);
    close(fd);
    str[size] = '\0';
    return str;
}
