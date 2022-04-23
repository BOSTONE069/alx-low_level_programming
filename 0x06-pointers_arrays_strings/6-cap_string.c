#include "main.h"
/**
 *cap_string - This is the main function
 *@s: This is the string to be entered
 *Return: void
 */
char *cap_string(char *s)
{
for (int i = 0; s[i] != '\0'; i++)
{
if (i == 0)
{
if ((s[i] >= 'a' && s[i] <= 'z'))
s[i] = s[i] - 32;
continue;
}
if (s[i] == ' ')
{
++i;

if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
continue;
}
}
else
{
if (s[i] >= 'A' && s[i] <= 'z')
s[i] = s[i] + 32;
}
}
return (s);
}
