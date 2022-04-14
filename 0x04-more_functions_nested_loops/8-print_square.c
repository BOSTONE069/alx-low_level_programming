#include "main.h"

/**
 * print_square - This is the main function that prints the square
 *  @i: the index of the square
 *  @j: the index of the column
 *
 */
void print_square(int size)
{
        int i, j;
   /* Iterate through N rows */
        for(i=1; i<=size; i++)
        {
                for(j=1; j<=size; j++)
                {
                        _putchar('#');
                }

        _putchar('\n');

        }


}