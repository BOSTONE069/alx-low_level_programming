#include "main.h"
/**
 *print_array - This function for the array to be printed
 *@n: this is the array to be printed
 *@a: this is the pointer
 *Return:void
 */
void print_array(int *a, int n)
{
int i;
int a = sizeof(n) / sizeof(n[0]);

for (i = 0; i < a; i++)
{
printf("%d,\n", n[i]);
}

}
