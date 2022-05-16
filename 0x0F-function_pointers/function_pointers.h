#ifndef ALX
#define ALX
/**
 *File:alx
 *Author: Bostone
 *Description: This file is the main header file and it contains all the decrations of all the functions in the program
 */

#include <stdlib.h>

int _putchar(char c);

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
