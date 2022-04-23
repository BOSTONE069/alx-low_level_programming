#include "main.h"
/**
 *string_toupper - This is the main function for converting lower to upper case
 *@str: This is the pointer string
 *Return: void
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
