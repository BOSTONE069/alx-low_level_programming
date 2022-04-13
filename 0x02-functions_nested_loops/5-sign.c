#include "main.h"

/**
 * print_sign - main block
 * Description: Function that prints the sign of a number
 * Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 * @n: this is the entered integer value
 * Return: Always
 * auth: Bostone Ochieng
 */
int print_sign(int n)
{

    if (n > 0){
        _putchar('+');
        return(1);
    }

    else if (n == 0){
        _putchar('0');
        return(0);
    }

    else{
        _putchar('-');
        return(-1);
    }
}