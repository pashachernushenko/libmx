# LIBMX Documentation

Here should be intro text

## Table of contents

## [Utils pack](#utils-pack)

## [Strings pack](#strings-pack)

## [Memory pack](#memory-pack)

## [List pack](#list-pack)

## [Extra pack](#extra-pack)

------------------------------------------

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



## Strings pack

## Memory pack

## List pack

## Extra pack
