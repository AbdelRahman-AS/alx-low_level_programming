#include "main.h"

/**
 * print_square - run numbers
 *@size: int
 * Return: Always 0.
 */
void print_square(int size)
{
int i;
int x;
for (x = 0 ; x < size; x++)
{
for (i = 0 ; i < size; i++)
{
_putchar('#');
}

_putchar('\n');
}
}
