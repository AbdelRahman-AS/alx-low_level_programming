#include "main.h"

/**
 * print_diagonal - run numbers
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int i;
int x;
for (x = 0 ; x < n; x++)
{    
for (i = 0 ; i < n; i++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
