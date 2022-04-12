#include <stdio.h>

/**
 * main - prints the alphabet letters in lower case
 * 
 * author: Bostone Ochieng
 */

int main ()
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
         putchar(letter);
    
    putchar('\n');
    
}