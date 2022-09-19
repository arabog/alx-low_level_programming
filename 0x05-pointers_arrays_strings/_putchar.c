#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints a string followed by a new line
 * @str: provided string
 * Return: On success 1
 */

int _putchar(char str)
{
return (write(1, &str, 1));
}

