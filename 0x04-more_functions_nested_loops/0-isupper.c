#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: character to be checked
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
int a, b, d, e;

a = 97;
b = 122;
d = 65;
e = 90;

if (c >= a && c <= b)
{
return (0);
}
else if (c >= d && c <= e)
{
return (1);
}

return (0);
}
