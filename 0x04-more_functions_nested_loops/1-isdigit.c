#include "main.h"

/**
 * _isdigit - main function block
 *@c: character or integer entered character
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
        for (c = 0; c <=9; c++)
        {
                if (c >= '0' && c <= '9')
                    return (1);
                else
                    return (0);
        }
}