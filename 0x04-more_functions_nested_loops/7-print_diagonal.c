#include "main.h"

/**
 * print_diagonal - main function for printing diagonal elements
 *
 * Description: Prints diagonals
 *
 *@n: number of spaces
 *@lines: number of lines to be printed
 *@row: number of rows to be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int row, lines;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= n; row++)
		{
			if (row > 1)
			{
				for (lines = 1; lines <= row - 1; lines++)
				{
				_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}