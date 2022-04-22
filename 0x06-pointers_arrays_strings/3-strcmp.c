#include "main.h"
/**
 *_strcmp - This is the fucnction for performing the comparison
 *@s1: This the first string
 *@s2: This is the second comparison
 *Return: void
 */
int _strcmp(char *s1, char *s2)
{
int length;

length = strcmp(s1, s2);
_putchar(length);

return (0);
}
