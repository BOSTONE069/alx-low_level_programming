#include "main.h"

/**
 * more_numbers - entry point
 * Description: Prints the numbers with _putchar
 * @number: this is the integer
 * @count: this is the number
 * Return: void
 */
void more_numbers(void)
{
        int number, count;

        for (count = 0; count <= 9; count++)
        {
               for (number = 0; number <= 14; number++)
		{
			if (number > 9)
				_putchar((number / 10) + '0');
			_putchar((number % 10) + '0');
		}
                _putchar('\n');
        }


}