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

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
