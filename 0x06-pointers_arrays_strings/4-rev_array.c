#include "main.h"
/**
 *reverse_array - This is the main function for reversing arrays
 *@a: This is the pointer the array
 *@n: This is the number of elements in tha array;
 *Return: void
 */
void reverse_array(int *a, int n)
{
int temp;

for (int i = 0; i < n; i++)
{
temp[n - 1 - i] = a[i];
}

for (int i = 0; i < n; i++)
{
a[i] = temp[i];
}

}
