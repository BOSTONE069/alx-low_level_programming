#include "main.h"

/**
 * main - prints the alphabet letters in lower case 10 times
 * 
 * author: Bostone Ochieng
 */

void print_alphabet_x10(void)
{
    int count = 0;
    char letter;

    while (count++ <= 9){
        for (letter = 'a'; letter <= 'z'; letter++)
            _putchar(letter);
    
        _putchar('\n');
    }
    

}