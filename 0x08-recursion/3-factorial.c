#include "main.h"

/**
*factorial - This is the main gives the length of string
*@n: This is the interger that has been entered
*Return: always success
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
