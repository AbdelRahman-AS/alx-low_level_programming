#include "main.h"

/**
 * more_numbers - run numbers
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int i;
int x;
for (x = 0 ; x < 10; x++)
{
for (i = 0 ; i < 15; i++)
{
int z;
z = i;
if (i > 9)
{
_putchar(1 + '0');
z -= 10;
}
_putchar(z + '0');
}
_putchar('\n');
}
}
