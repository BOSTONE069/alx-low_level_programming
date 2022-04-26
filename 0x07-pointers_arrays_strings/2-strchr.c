#include "main.h"

/**
*_strchr - This is the main function locating a character in a string
*@s: this is destination pointer
*@c: the is the source character
*Return: this resturns to the destination pointer
*/
char *_strchr(char *s, char c)
{
	char *ret = strchr(s, c);

	return (ret);
}
