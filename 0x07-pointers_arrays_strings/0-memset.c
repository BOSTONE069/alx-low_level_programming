#include "main.h"
/**
*_memset - This is the main function for setting the memory
*@s: this is pointer
*@b: the is the character
*@n: The is the unassigned character
*Return: Returns the memeory of s
*/
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
