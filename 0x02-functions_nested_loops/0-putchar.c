#include <stdio.h>
int main(void)
{
char val[8] = "_putchar";
int i;
for (i = 0; i < 8; i++)
{
putchar(val[i]);
}
putchar('\n');
return (0);
}
