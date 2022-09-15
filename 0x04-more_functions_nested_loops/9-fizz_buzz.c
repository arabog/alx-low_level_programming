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


for (i = 1; i <= num; i++)
{
if (i % 15 == 0)
{
printf(" FizzBuzz");
}
else if (i % 5 == 0)
{
printf(" Buzz");
}
else if (i % 3 == 0)
{
printf(" Fizz");
}
else
{
printf(" %d\n", i);
}

}

printf("\n");
return (0);
}
