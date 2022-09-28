#include "main.h"


/**
 * factorial - returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */

int factorial(int s)
{
if (s < 0)
{
return (-1);
}
else if (s == 1)
{
return (1);
}
else
{
return (s * factorial(s - 1));
}
}

