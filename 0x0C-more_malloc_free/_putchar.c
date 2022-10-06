#include <unistd.h>
#include "main.h"
/**
 * _putchar - print integers only
 * @c: integer numbers
 * Return: Always 0 (Success)
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
