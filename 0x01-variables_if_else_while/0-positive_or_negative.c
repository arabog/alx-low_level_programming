#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - Determines if a number is positive, negative or zero.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d\n is positve\n", n);
}
else if (n == 0)
{
printf("%d\n is zero\n", n);
}
else
{
printf("%d\n is negative\n", n);
}
return (0);
}
