#include "main.h"

/**
*factorial - This is the main gives the length of string
*@n: This is the interger that has been entered
*Return: always success
*/

int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
