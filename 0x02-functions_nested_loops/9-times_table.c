#include "main.h"

/**
 * times_table  - Prints the 9 times table
 *
 * Return: no return
 */

void time_table(void)
{
int a, b, sign;

for (a = 0; a <= 9; a++)
{
_putchar(48);

for (b = 1; b <= 9; b++)
{
sign = a * b;
_putchar(44); /* , */
_putchar(32); /*space */
if (sign <= 9)
{
_putchar(32);
_putchar(sign + 48);
}
else
{
_putchar((sign / 10) + 48);
_putchar((sign % 10) + 48);
}
}
_putchar('\n');
}
}
