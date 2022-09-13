#include "main.h"
/**
 * _isalpha - checks for alphabets characters, lowercase and uppercase
 * @c: an integer argument
 * Return: always 1(Success)
 */

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
