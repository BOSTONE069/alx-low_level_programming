#include "main.h"

/**
 * print_line - entry point
 *
 * Description: Prints lines
 * @i: number of lines
 * Return: void
 */
void print_line(int n)
{
        int i = '_';
        int count=0;

        while(count++ <= n)
        {
                if (n > 0)
                {
                        _putchar(i);
                }
                else
                {
                _putchar('\n');
                }
        }


}