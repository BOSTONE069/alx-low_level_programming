#include "main.h"

/**
*_memcpy - This is the main function for copying memory are
*@dest: this is destination pointer
*@src: the is the source character
*@n: The is the unassigned character
*Return: this resturns to the destination pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
