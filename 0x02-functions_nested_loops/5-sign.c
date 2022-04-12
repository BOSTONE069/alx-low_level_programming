#include <stdio.h>

/**
 * main - maincomparison with n 
 * Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 * auth: Bostone Ochieng
 */

int main()
{
    int n;

    if (n > 0){
        putchar('+');
        return(1);
    }

    else if (n == 0){
        putchar('0');
        return(0);
    }

    else{
        putchar('-');
        return(-1);
    }
       
    
}