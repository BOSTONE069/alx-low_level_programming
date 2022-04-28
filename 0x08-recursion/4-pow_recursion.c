#include "main.h"

/**
*_pow_recursion - This is the main gives the length of string
*@x: This is the interger that has been entered
*@y: This is the interger that has been entered
*Return: always success
*/

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
