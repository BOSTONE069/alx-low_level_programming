#include "main.h"

/**
*_strspn - This is for getting the length of a prefix substring
*@s: this is destination pointer
*@accept: the is the source character
*Return: this resturns to the destination pointer
*/
unsigned int _strspn(char *s, char *accept)
{
	char len = strspn(s, accept);

	return (len);
}
