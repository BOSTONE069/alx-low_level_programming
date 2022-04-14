#include "main.h"

/**
 * print_line - entry point
 *
 * Description: Prints lines
 * @lines: number of lines
 * Return: void
 */
void print_line(int n)
{

        int lines;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lines = 1; lines <= n; lines++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}


}