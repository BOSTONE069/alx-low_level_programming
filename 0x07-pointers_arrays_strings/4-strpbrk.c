#include "main.h"

/**
*_strpbrk - function for searching for any set of string string
*@s: this is destination pointer
*@accept: the is the source character
*Return: this resturns to the destination pointer
*/
char *_strpbrk(char *s, char *accept)
{
	char *set = strpbrk(s, accept);

	return (set);
}
