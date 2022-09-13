#include "main.h"
/**
 * main - print _putchar as a message
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
int  val[] = {95, 112, 117, 116, 99, 104, 97, 114};
int inte, sz;

sz = sizeof(val) / sizeof(int);
for (inte = 0; inte  < sz; inte++)
{
_putchar(val[inte]);
}
_putchar('\n');
return (0);
}
