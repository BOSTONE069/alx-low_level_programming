#ifndef BIT_H
#define BIT_H

/*
 * File: Main.h
 * AUth: OCHIENG BOSTONE
 * Desc: Header file containing prototypes for all functions
 *       written in the 0x13-bit_manipulation directory.
*/

int _putchar(char c);
int _strlen(const char *s);
int _pow_recursion(int x, int y);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
void recursion_print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif
