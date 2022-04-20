#include "main.h"
/**
 * swap_int - This is mean for swapping variables
 * @a: This is pointer 1
 * @b: This is pointer 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
