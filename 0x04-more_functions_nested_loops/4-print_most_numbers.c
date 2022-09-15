#include "main.h"
/**
 * print_most_numbers - print the numbers from 0 - 9 except 2 and 4
 *
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
int val[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
int i, num;

num = sizeof(val) / sizeof(int);

for (i = 0; i < num; i++)
{
if (val[i] == 50 || val[i] == 52)
{
continue;
}
_putchar(val[i]);
}
_putchar('\n');

}

