#include "main.h"

/**
 * _islower - main block
 * Description: function that checks for lowercase letters
 * @c:This is the inserted integer
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
    if (c >= 'a' && c <= 'z'){
        return(1);
    }
    else{
        return(0);
    }
}