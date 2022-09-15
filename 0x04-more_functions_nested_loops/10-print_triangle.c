#include "main.h"

/**
 * print_triangle - print a triangle
 *
 * @size: given integer number
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
int t, u;

for (t = 0; t < size; t++)
{
for (u = 1; u < (size - t); u++)
{
_putchar(' ');
}

for (u--; u < size; u++)
{
_putchar(35);
}

if (t < size - 1)
{
_putchar('\n');
}

}
_putchar('\n');
}
