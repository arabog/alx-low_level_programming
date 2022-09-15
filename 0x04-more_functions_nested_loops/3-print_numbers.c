#include "main.h"
/**
 * print_numbers - prints the numbers from 0 - 9 followed by a new line
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
int val[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
int i, s;

s = sizeof(val) / sizeof(int);

for (i = 0; i <= s; i++)
{
_putchar(val[i]);
}

_putchar('\n');
}
