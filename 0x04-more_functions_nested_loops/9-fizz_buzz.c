#include <stdio.h>

/**
 * main - fizzbuzz print number from 1 to 100
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
int i, num;
num = 100;

i = 1;
printf("%d", i);

for (i = 2; i <= num; i++)
{
if ((i % 3 == 0) && (i % 5 == 0))
{
printf(" FizzBuzz");
}
else if (i % 3 == 0)
{
printf(" Fizz");
}
else if (i % 5 == 0)
{
printf(" Buzz");
}
else
{
printf(" %d", i);
}
}

printf("\n");
return (0);
}
