#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/*.......................standard libs used.........................*/
#include <stdio.h>

/*...................... function prototypes*.......................*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
#endif
