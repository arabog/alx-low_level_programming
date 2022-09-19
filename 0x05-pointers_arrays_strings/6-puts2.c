#include "main.h"

/**
 * puts2 - prints every other character of in a string from the 1st xter
 * @str: provided string
 */

void puts2(char *str)
{
int count = 0;

while (count >= 0)
{
if (str[count] == '\0')
{
_putchar('\n');
break;
}

if (count % 2 == 0)
{
_putchar(str[count]);
}
count++;
}
}
