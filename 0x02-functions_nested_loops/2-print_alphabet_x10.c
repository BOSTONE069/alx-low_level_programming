#include "main.h"

/**
 * main - prints the alphabet letters in lower case 10 times
 * 
 * author: Bostone Ochieng
 */

int main ()
{
    int count = 0;
    char letter;

    while (count++ <= 9){
        for (letter = 'a'; letter <= 'z'; letter++)
            _putchar(letter);
    
        _putchar('\n');
    }
    
    return 0;
}