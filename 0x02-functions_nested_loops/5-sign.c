#include "main.h"
/**
 * print_sign -  prints the sign of a number
 *
 * @n: a sign
 * Return: 1, 0, -1 if n is greater than zero, zero or less than zero
 */
int print_sign(int n)
{
for (n = 48; n < 58; n++)
{
if (n > 0)
{
return (1);
}
else if (n == 0)
{
return (0);
}
else if (n < 0)
{
return (-1);
}
}
}
