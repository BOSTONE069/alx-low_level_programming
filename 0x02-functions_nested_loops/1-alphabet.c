#include "main.h"

/**
 * print_alphabet - main block
 * Description: function that prints the alphabet.
 */
void print_alphabet(void)
{
          char letter;

          for (letter = 'a'; letter <= 'z'; letter++)
          {
            _putchar(letter);
          }
          _putchar('\n');
}
