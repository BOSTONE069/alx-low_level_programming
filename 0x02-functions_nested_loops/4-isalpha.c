#include <stdio.h>

/**
 * main - This is checking whether a letter is upper or lowercase
 * 
 * auth: Bostone Ochieng
 */

int main ()
{
    int letter;

    if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
          return(1);
    else;
          return(0);

    putchar('\n');
}