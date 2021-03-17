#ifndef LIBMX_H
#define LIBMX_H

#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <limits.h>
#include <fcntl.h>
#include <malloc/malloc.h>

/*------------------*
 *   UTILS PACK     *
 *------------------*/
    //basic
    void mx_printchar(char c);                                                              //DONE
    void mx_printstr(const char *s);                                                        //DONE
    void mx_print_strarr(char **arr, const char *delim);                                    //DONE
    void mx_printint(int n);                                                                //DONE
    char *mx_nbr_to_hex(unsigned long nbr);                                                 //DONE
    int mx_bubble_sort(int *arr, int size);                                                 //DONE
    int mx_quicksort(int *arr, int left, int right);                                        //DONE  ???
    char *mx_itoa(int number);                                                              //DONE

    //advanced
    void mx_print_unicode(wchar_t c);                                                       //DONE
    double mx_pow(double n, unsigned int pow);                                              //DONE
    int mx_sqrt(int x);                                                                     //DONE
    unsigned long mx_hex_to_nbr(const char *hex);                                           //DONE
    void mx_foreach(int *arr, int size, void (*f)(int));                                    //DONE
    int mx_binary_search(char **arr, int size, const char *s, int *count);                  //DONE

/*------------------*
 *   STRINGS PACK   *
 *------------------*/

    //basic
    int mx_strlen(const char *s);                                                           //DONE
    void mx_swap_char(char *s1, char *s2);                                                  //DONE
    char *mx_strcpy(char *dst, const char *src);                                            //DONE
    int mx_strcmp(const char *s1, const char *s2);                                          //DONE
    char *mx_strcat(char *restricts1, const char* restricts2);                              //DONE
    char *mx_strnew(const int size);                                                        //DONE
    char *mx_strdup(const char *s1);                                                        //DONE
    char *mx_strjoin(const char *s1, const char *s2);                                       //DONE
    void mx_strdel(char **str);                                                             //DONE
    void mx_del_strarr(char ***arr);                                                        //DONE
    char *mx_file_to_str(const char *file);                                                 //DONE
    int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd);            //DONE

    //advanced
    char *mx_strncpy(char *dst, const char *src, int len);                                  //DONE
    void mx_str_reverse(char *s);                                                           //DONE
    char *mx_strndup(const char *s1, size_t n);                                             //DONE
    char *mx_strstr(const char *haystack, const char *needle);                              //DONE
    int mx_count_words(const char *str, char c);                                            //DONE
    int mx_count_substr(const char *str, const char *sub);                                  //DONE
    int mx_get_char_index(const char *str, char c);                                         //DONE
    int mx_get_substr_index(const char *str, const char *sub);                              //DONE
    char *mx_strtrim(const char *str);                                                      //DONE
    char *mx_del_extra_spaces(const char *str);                                             //DONE
    char **mx_strsplit(const char *s, char c);                                              //DONE  ???
    char *mx_replace_substr(const char *str, const char *sub, const char *replace);         //DONE

/*------------------*
 *   MEMORY PACK    *
 *------------------*/

    //basic
    void *mx_memset(void *b, int c, size_t len);                                            //DONE
    void *mx_memcpy(void *restrictdst, const void *restrictsrc, size_t n);                  //DONE
    int mx_memcmp(const void *s1, const void *s2, size_t n);                                //DONE
    void *mx_realloc(void *ptr, size_t size);                                               //DONE

    //advanced
    void *mx_memmove(void *dst, const void *src, size_t len);                               //DONE
    void *mx_memrchr(const void *s, int c, size_t n);                                       //DONE
    void *mx_memccpy(void *restrictdst, const void *restrictsrc, int c, size_t n);          //DONE
    void *mx_memchr(const void *s, int c, size_t n);                                        //DONE
    void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len);//DONE

/*------------------*
 *   LIST PACK      *
 *------------------*/

    typedef struct  s_list {
        void *data;
        struct s_list *next;
    }               t_list;

    //basic
    t_list *mx_create_node(void *data);                                                     //DONE
    void mx_push_front(t_list **list, void *data);                                          //DONE
    void mx_push_back(t_list **list, void *data);                                           //DONE
    void mx_pop_front(t_list **head);                                                       //DONE
    void mx_pop_back(t_list **head);                                                        //DONE

    //advanced
    int mx_list_size(t_list *list);                                                         //DONE
    t_list *mx_sort_list(t_list *lst, bool(*cmp)(void *, void *));                          //DONE

/*------------------*
 *   EXTRA PACK     *
 *------------------*/

    bool mx_isdigit(int c);
    bool mx_isspace(int c);
    int mx_tolower(int c);
    int mx_toupper(int c);
    bool mx_isalpha(int c);
    char *mx_strchr(const char *s, int c);
    int mx_atoi(const char *str);
    int mx_strncmp(const char *s1, const char *s2, int n);
#endif
