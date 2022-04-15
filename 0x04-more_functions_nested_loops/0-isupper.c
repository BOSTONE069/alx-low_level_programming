#include "main.h"

/**
 * _isupper - main block
 * Description: function that checks for uppercase letters
 * @c:This is the inserted integer
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
                if (c >= 'A' && c <= 'Z')
                {
                    return(1);
                }
                else
                {
                    return(0);
                }
}
