#include "main.h"
#include <string.h>

/**
 *print_rev - This prints string in reverse order
 *@s: This is the string to be printed
 *Return: void
 */
void print_rev(char *s)
{
	int i = strlen(s) - 1;

	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
