#include "main.h"

/**
 * print_diagonal - run numbers
 *@n: int
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int i;
int x;
for (x = 0 ; x < n; x++)
{
for (i = 0 ; i < x; i++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
