#include <stdio.h>

/**
 * print_to_98 - Prints all netral numbers from input to 98
 * @n: This is the number where counting begin
 */
void print_to_98(int n)
{
 if (n >= 98)
 {
  while(n>98)
     printf("%d, ", n--);
  printf("%d\n", n);
 }

 else

 {
  while(n <98)
     printf("%d, ", n++);
  printf("%d\n", n);
 }
}