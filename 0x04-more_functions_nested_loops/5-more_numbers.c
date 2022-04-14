#include "main.h"

/**
 * more_numbers - entry point
 *
 * Description: Prints the numbers with _putchar
 *
 * Return: void
 */
void more_numbers(void)
{
        int count = 0;
        int num;

        while (count++ <=10 )
        {
                for (num = 0; num <= 14; num++)
                {
                        _putchar(num);
                }
        }
        _putchar('\n');

}