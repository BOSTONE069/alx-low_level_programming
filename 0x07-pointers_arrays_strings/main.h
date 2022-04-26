#ifndef ALX
#define ALX

/**
 *File:alx
 *Author: Bostone
 *Description: This file is the main header file and it contains all the decrations of all the functions in the program
 */

#include <string.h>
#include <stdio.h>

int _putchar(char c);

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);


#endif
