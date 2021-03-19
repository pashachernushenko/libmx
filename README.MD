# LIBMX Documentation

The main idea staying behind this challenge is to create own static library of most common functions uning only some low-level functions, such as: `malloc, malloc_size/malloc_usable_size, free, open,read, write, close, exit`. 

Library is compiled with `clang -std=c11 -Wall -Wextra -Werror -Wpedantic`.

To compile library simply use `make` or `make libmx.a` in your shell. There are also some test cases included, which can be compiled by `make test` and they executed by `./test`.

Feel free to use it if you need, ask questions and so on. As this is mostly educational project, feedback is highly appreciated :)

Enjoy!

## Table of contents

## [Utils pack](#utils-pack-1)

* [Print character](#print-character)
* [Print string](#print-string)
* [Print array of strings](#print-array-of-strings)
* [Print integer](#print-integer)
* [Decimal to hex](#decimal-to-hex)
* [Bubble sort](#bubble-sort)
* [Quick sort](#quick-sort)
* [Integer to ASCII](#integer-to-ascii)
* [Print multibyte characters](#print-multibyte-characters)
* [Exponentiation](#exponentiation)
* [Square root](#square-root)
* [Hex to decimal](#hex-to-decimal)
* [For each](#for-each)
* [Binary search](#binary-search)

## [Strings pack](#strings-pack-1)

* [String length](#string-length)
* [Swap characters](#swap-characters)
* [Copy string](#copy-string)
* [Compare strings](#compare-strings)
* [Concatenate strings](#concatenate-strings)
* [New string](#new-string)
* [Duplicate string](#duplicate-string)
* [Join strings](#join-strings)
* [Delete string](#delete-string)
* [Delete array of strings](#delete-array-of-strings)
* [File to string](#file-to-string)
* [Readline](#readline)
* [Copy them all](#copy-them-all)
* [Reverse string](#reverse-string)
* [Duplicate part of string](#duplicate-part-of-string)
* [Locate substring](#locate-substring)
* [Print character](#print-character)
* [Count words](#count-words)
* [Count substrings](#count-substrings)
* [Get character index](#get-character-index)
* [Get substring index](#get-substring-index)
* [Trim strings](#trim-strings)
* [Clean string](#clean-string)
* [Split string](#split-string)
* [Replace substrings](#replace-substrings)

## [Memory pack](#memory-pack-1)

* [Fill memory](#fill-memory)
* [Copy memory](#copy-memory)
* [Compare memory](#compare-memory)
* [Reallocate memory](#reallocate-memory)
* [Non-overlapping memory copy](#non-overlapping-memory-copy)
* [Locate byte from end](#locate-byte-from-end)
* [Copy memory to ...](#copy-memory-to-)
* [Locate byte from start](#locate-byte-from-start)
* [Locate block of bytes](#locate-block-of-bytes)

## [List pack](#list-pack-1)

* [Create node](#create-node)
* [Push front](#push-front)
* [Push back](#push-back)
* [Pop front](#pop-front)
* [Pop back](#pop-back)
* [Size of list](#size-of-list)
* [Sort list](#sort-list)

## [Extra pack](#extra-pack-1)

* [Allocated memory size](#allocated-memory-size)
* [Is digit?](#is-digit)
* [Is white-space?](#is-white-space)
* [To lower case](#to-lower-case)
* [To upper case](#to-upper-case)
* [Is aplhabetic?](#is-aplhabetic)
* [Locate character](#locate-character)
* [ASCII to integer](#ascii-to-integer)
* [Compare strings N](#compare-strings-n)

---

## Utils pack

### Print character

Outputs a single character to the standard output.

```c
void mx_printchar(char c);
```

### Print string

Outputs a string of characters to the standard output.

```c
void mx_printstr(const char *s);
```

### Print array of strings

Outputs:

* an array of strings `arr` to the standard output with a delimiter `delim` between the elements of an array;
* nothing if `arr` or `delim` do not exist;
* a newline at the end of the output.

`arr` must be `NULL`-terminated, in other cases the behavior is undefined.

```c
void mx_print_strarr(char **arr, const char *delim);
```

### Print integer

Outputs integer values to the standard output.

```c
void mx_printint(int n);
```

### Decimal to hex

Converts an `unsigned long` number into a hexadecimal string.

Returns the number converted to a hexadecimal string.

```c
char *mx_nbr_to_hex(unsigned long nbr);
```

### Bubble sort

Sorts an array of integers in place in ascending order using the bubble sort algorithm.

Returns the number of swap operations.

```c
int mx_bubble_sort(int *arr, int size);
```

### Quick sort

Sorts an array of integers in ascending order using the quick sort algorithm.

Returns:

* the number of swaps;
* `-1` if `arr` does not exist.

```c
int mx_quicksort(int *arr, int left, int right);
```

### Integer to ASCII
 Takes an integer and converts it to a string.
 
 Returns the number as a `NULL`-terminated string.
 
 ```c
 char *mx_itoa(int number);
 ```

### Print multibyte characters

Outputs ASCII and multibyte characters to the standard output.

```c
void mx_print_unicode(wchar_t c);
```

### Exponentiation

Computes `n` raised to the power of zero or a positive integer `pow`.

Returns the result of `n` to the power of `pow`.

```c
double mx_pow(double n, unsigned int pow);
```

### Square root

Computes the non-negative square root of `x`.

Returns the square root of the number`x` if it is natural, and `0` otherwise.

```c
int mx_sqrt(int x);
```

### Hex to decimal

Converts a hexadecimal string into an `unsigned long` number.

Returns the `unsigned long` number.

```c
unsigned long mx_hex_to_nbr(const char *hex);
```

### For each

Applies the function `f` for each element of the array `arr` given `size`.

```c
void mx_foreach(int *arr, int size, void(*f)(int));
```

### Binary search

Searches the strings  in the array `arr` with the given `size` of array using the binary search algorithm.

Returns:

* the `index` of the found string in the array
* `-1`  in case of errors or if the string has not been found
* assigns the number of required iterations to the `count` pointer.

```c
int mx_binary_search(char **arr, int size, const char *s, int *count);
```

---

## Strings pack

### String length

Has the same behavior as the corresponding standard libc function `strlen`.

```c
int mx_strlen(const char *s);
```

### Swap characters

Swaps the characters of a string using pointers. Do nothing if `s1` or `s2` does not exist.

```c
void mx_swap_char(char *s1, char *s2);
```

### Copy string

Has the same behavior as the standard libc function `strcpy`.

```c
char *mx_strcpy(char *dst, const char *src);
```

### Compare strings

Has the same behavior as the standard libc function `strcmp`.

```c
int mx_strcmp(const char *s1, const char *s2);
```

### Concatenate strings

Has the same behavior as the standard libc function `strcat`.

```c
char *mx_strcat(char *restrict s1, const char *restrict s2);
```

### New string

Allocates memory for a string of a specific `size` and one additional byte for the terminating `'\0'`. Initializes each character with `'\0'`.

Returns the string of a specific `size` and terminated by `'\0'` or `NULL` if creation fails.

```c
char *mx_strnew(const int size);
```

### Duplicate string

Has the same behavior as the standard libc function `strdup`.

```c
char *mx_strdup(const char *s1);
```

### Join strings

Concatenates strings `s1` and `s2` into a new string. Terminates the new string with `'\0'`.

Returns: 

* the string as a result of concatenation `s1` and `s2`;
* the new copy of non-`NULL` parameter if one and only one of the parameters is `NULL`;
* `NULL` if the concatenation fails.

```c
char *mx_strjoin(const char *s1, const char *s2);
```

### Delete string

Takes a pointer to a string, frees string memory with `free` and sets the string to `NULL`.

```c
void mx_strdel(char **str);
```

### Delete array of strings

Takes a pointer to a `NULL`-terminated array of strings, deletes the contents of the array, frees array memory with `free` and sets a pointer to `NULL`.

```c
void mx_del_strarr(char ***arr);
```

### File to string

Takes a filename as a parameter and reads data from the file into a string.

Returns:

* `NULL`-terminated string;
* `NULL` in case of any errors.

```c
char *mx_file_to_str(const char *file);
```

### Readline

Reads the line from the given `fd` into the `lineptr` until it:

* reaches a `delim` character. The delimiter must not be returned with `lineptr`;
* reaches the End Of File (EOF);

Returns:

* the number of bytes that are written into `lineptr`;
* `-1` if EOF is reached and there is nothing to write in `lineptr`;
* `-2`  in case of errors or `fd` is invalid.

```c
int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd);
```

### Copy them all

Has the same behavior as the standard libc function `strncpy`.

```c
char *mx_strncpy(char *dst, const char *src, int len);
```

### Reverse string

Reverses a string using pointers. Do nothing if a string does not exist.

```c
void mx_str_reverse(char *s);
```

### Duplicate part of string

Has the same behavior as the standard libc function `strndup`.

```c
char *mx_strndup(const char *s1, size_t n);
```

### Locate substring

Has the same behavior as the standard libc function `strstr`.

```c
char *mx_strstr(const char *haystack, const char *needle);
```

### Count words

Counts words in a string.

Returns the number of words in the string.

```c
int mx_count_words(const char *str, char c);
```

### Count substrings

Counts the substrings `sub` in the string `str`.

Returns:

* the count of `sub` in `str`;
* `0` if `sub` is an empty string;
* `-1` if `str` and/or `sub` do not exist.

```c
int mx_count_substr(const char *str, const char *sub);
```

### Get character index

Finds the index of the first occurrence of the character `c` in a string `str`.

Returns:

* the index of the first occurrence;
* `-1` if no occurrence is found;
* `-2` if the string does not exist.

```c
int mx_get_char_index(const char *str, char c);
```

### Get substring index

Finds the index of a substring.

Returns:

* the index of the first character of `sub` in `str`;
* `-1` if `sub` is not found in `str`;
* `-2` if `str` or `sub` does not exist.

```c
int mx_get_substr_index(const char *str, const char *sub);
```

### Trim strings

Takes a string, and creates a new one from it without whitespace characters at the beginning and the end of the string.

Returns:

* a new trimmed string;
* `NULL` if the string `str` does not exist or string trim fails.

```c
char *mx_strtrim(const char *str);
```

### Clean string

Takes a string, and creates a new one from it without whitespace characters in thebeginning and/or at the end of the string. Separates words in the new string with exactly one space character.

Returns:

* a new created string;
* `NULL` if the string `str` does not exist or string creation fails.

```c
char *mx_del_extra_spaces(const char *str);
```

### Split string

Converts a strings  to a `NULL`-terminated array of words.

Returns:

* the `NULL`-terminated array of strings;
* `NULL` if the strings  does not exist or conversion fails.

```c
char **mx_strsplit(const char *s, char c);
```

### Replace substrings

Replaces all occurrences of `sub` in `str` with `replace`.

Returns:
* a new string where substrings are replaced;
* `NULL` if `sub` or `str` or `replace` does not exist.

```c
char *mx_replace_substr(const char *str, const char *sub, const char *replace);
```

---

## Memory pack

### Fill memory

Has the same behavior as the standard libc function `memset`.

```c
void *mx_memset(void *b, int c, size_t len);
```

### Copy memory

Has the same behavior as the standard libc function `memcpy`.

```c
void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n);
```

### Compare memory

Has the same behavior as the standard stdlib function `memcmp`.

```c
int mx_memcmp(const void *s1, const void *s2, size_t n);
```

### Reallocate memory

Has the same behavior as the standard stdlib function `realloc`.

```c
void *mx_realloc(void *ptr, size_t size);
```

### Non-overlapping memory copy

Has the same behavior as the standard libc function `memmove`.

```c
void *mx_memmove(void *dst, const void *src, size_t len);
```

### Locate byte from end

Similar to the function `mx_memchr`,  except that it searches in the opposite direction from the end of the bytes `n` points to `s` instead of directly from the beginning.

```c
void *mx_memrchr(const void *s, int c, size_t n);
```

### Copy memory to ...

Has the same behavior as the standard stdlib function `memccpy`.

```c
void *mx_memccpy(void *restrict dst, const void* restrict src, int c, size_t n);
```

### Locate byte from start

Has the same behavior as the standard stdlib function `memchr`.

```c
void *mx_memchr(const void *s, int c, size_t n);
```

### Locate block of bytes

Has the same behavior as the standard libc function `memmem`.

```c
void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len);
```

---

## List pack

Some functions to work with aingly linked list which contains void pointer.

```c
typedef struct s_list {
  void *data;
  struct s_list *next;
}              t_list;
```

### Create node

Creates a new node of a linked list `t_list`. The function assigns a parameter `data` to the list variable `data` and assigns `next` to `NULL`.

```c
t_list *mx_create_node(void *data);
```

### Push front

Inserts a new node of `t_list` type with the given parameter `data` at the beginning of the linked list.

```c
void mx_push_front(t_list **list, void *data);
```

### Push back

Inserts a node of `t_list` type with the given parameter `data` at the end of the linked list.

```c
void mx_push_back(t_list **list, void *data);
```

### Pop front

Removes the first node of the linked list and frees the memory allocated for the node.

```c
void mx_pop_front(t_list **head);
```

### Pop back

Removes the last node of the linked list and frees the memory allocated for the node.

```c
void mx_pop_back(t_list **head);
```

### Size of list

Calculates the number of nodes in a linked list.

Returns the amount of nodes in the linked list.

```c
int mx_list_size(t_list *list);
```

### Sort list

Sorts a list's contents in ascending order. The function `cmp` returns `true` if `a > b` and `false` in other cases.

Returns a pointer to the first element of the sorted list.

```c
t_list *mx_sort_list(t_list *lst, bool(*cmp)(void*, void*));
```

---

## Extra pack

### Allocated memory size

Platform-indepent function which return size of previously allocated memory.

Special credits to https://stackoverflow.com/users/1424877/quuxplusone

```c
size_t mx_malloc_size(void *p);
```

### Is digit?

Has the same behaviour as the standard libc function `isdigit`.

```c
bool mx_isdigit(int c);
```

### Is white-space?

Has the same behaviour as the standard libc function `isspace`.

```c
bool mx_isspace(int c);
```

### To lower case

Has the same behaviour as the standard libc function `tolower`.

```c
int mx_tolower(int c);
```

### To upper case

Has the same behaviour as the standard libc function `toupper`.

```c
int mx_toupper(int c);
```

### Is alphabetic?

Has the same behaviour as the standard libc function `isalpha`.

```c
bool mx_isalpha(int c);
```

### Locate character

Create a function that has the same behaviour as the standard libc function `strchr`.

```c
char *mx_strchr(const char *s, int c);
```

### ASCII to integer

Converts an ASCII string to an integer as the standard libc function `atoi` does.

```c
int mx_atoi(const char *str);
```

### Compare strings N

Has the same behaviour as the standard libc function `strncmp`.

```c
int mx_strncmp(const char *s1, const char *s2, int n);
```
