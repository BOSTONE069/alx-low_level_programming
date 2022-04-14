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

        int number;

        while (count++ <= 9)
        {
                for (number = 0; number <= 14; number++)
                {
                        _putchar(number);
                }
        }
        _putchar('\n');

}