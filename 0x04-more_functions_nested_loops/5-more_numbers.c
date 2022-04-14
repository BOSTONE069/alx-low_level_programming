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
        int number, x, y, count;

        for (count = 0; count <= 9; count++)
        {
               for (number = 0; number <= 14; number++)
		{
                        x = (number / 10);
                        y = (number % 10);

			if (number > 9)
				_putchar( x + '0');

			_putchar(y + '0');
		}
                _putchar('\n');
        }


}