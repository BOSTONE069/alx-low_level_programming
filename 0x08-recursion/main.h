#ifndef ALX
#define ALX

/**
 *File:alx
 *Author: Bostone
 *Description: This file is the main header file and it contains all the decrations of all the functions in the program
 */

#include <string.h>
#include <stdio.h>
#include <math.h>

int _putchar(char c);

void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);

#endif
