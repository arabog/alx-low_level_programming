#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success).
 */
void print_alphabet_x10(void)
{
int c, i;
for (c = 0; c < 10; c++)
{
for (i = 97; i < 123; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
