#include "main.h"

/**
 * _isdigit - check for a digit (0 through 9)
 *
 * @c: a digit
 *
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
int a = 48;
int b = 57;
if (c >= a && c <= b)
{
return (1);
}
else
{
return (0);
}

}
