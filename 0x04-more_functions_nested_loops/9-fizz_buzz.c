#include <stdio.h>

/**
 * main - fizzbuzz
 *
 * Return: Always 0.
 */

int main(void)
{
int x;

for (x = 1; x < 101; x++)
{
if (x != 1)
{
putchar(' ');
}
if (x % 3 == 0 && x % 5 == 0)
{
printf("FizzBuzz");
}
else if (x % 3 == 0)
{
printf("Fizz");
}
else if (x % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", x);
}
}
printf("\n");
return (0);
}
