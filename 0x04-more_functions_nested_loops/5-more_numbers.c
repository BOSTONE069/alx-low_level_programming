#include "main.h"

/**
 * more_numbers - entry point
 * Description: Prints the numbers with _putchar
 * @number: this is the integer
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
			if (number > 9)
				_putchar((number / 10) + '0');
			_putchar((number % 10) + '0');
		}
        }
        _putchar('\n');

}