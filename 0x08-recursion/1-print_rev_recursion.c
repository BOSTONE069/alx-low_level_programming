#include "main.h"

/**
*_print_rev_recursion - This is the main function
*@s: This is the string that has been entered
*Return: void
*/
void _print_rev_recursion(char *s)
{
	static int i, len, temp;
	len = strlen(s);

	if (i < len/2)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;
		_print_rev_recursion(s);
	}
}
