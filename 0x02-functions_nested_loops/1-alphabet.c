#include "main.h"

/**
* main - prints the alphabet letters in lower case
* print_alphabet - function that prints the alphabet, in lowercase, followed by a new line
* author: Bostone Ochieng
*/

/**
* print_alphabet - prints the alphabet, in lowercase, followed by a new line
*/
void print_alphabet(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
        _putchar(letter);

    _putchar('\n');
}