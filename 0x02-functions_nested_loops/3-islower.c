#include "main.h"
/**
 * _islower - show 1 if the input is a lowercase character and 0 if it is not.
 * @c: an integer argument
 * Return: Always 0 (Success).
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}

