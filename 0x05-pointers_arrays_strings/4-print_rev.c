#include "main.h"
#include <string.h>
/**
 *print_rev - This prints string in reverse order
 *@s: This is the string to be printed
 *Return: void
 */
void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
