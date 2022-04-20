#include "main.h"

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
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
