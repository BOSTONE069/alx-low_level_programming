#include "main.h"

/**
*_strstr - function for locating a substring
*@haystack: this is destination pointer
*@needle: the is the source character
*Return: this returns the located substring
*/
char *_strstr(char *haystack, char *needle)
{
	char *locating = strstr(haystack, needle);

	return (locating);
}
