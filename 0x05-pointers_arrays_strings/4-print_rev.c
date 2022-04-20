#include "main.h"
#include <string.h>
/**
 *print_rev - This prints string in reverse order
 *@s: This is the string to be printed
 *Return: void
 */
void print_rev(char *s)
{
int i, len, temp;
len = strlen(s);
for (i = 0; i < len / 2; i++)
{
temp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = temp;
}
}
