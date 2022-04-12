#include "main.h"

/**
 * times_table - main block
 * Description: This prints the 9 times table
 */
void times_table(void)
{
  int n, mult, product;

  for (n = 0; n <= 9; n++)
  {
   _putchar('0');

   for (mult = 1; mult <= 9; mult++)
   {
    _putchar(',');
    _putchar(' ');

    product = n * mult;

    if (product <= 9)
      _putchar(' ');
    else
      _putchar((product / 10) + '0');

    _putchar((product % 10) + '0');
   }
   _putchar('\n');
  }
}