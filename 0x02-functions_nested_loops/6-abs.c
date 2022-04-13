#include "main.h"

/**
 * _abs - main block
 * Description - This print the absolute value of the integer
 * @c: This the entered value
 * Return: c or -c
 */
int _abs(int c)
{
    if (c >= 0){
     return(c);
    }
    else{
     return(-c);
    }
}