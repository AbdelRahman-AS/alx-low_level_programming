#include "main.h"

/**
 * print_most_numbers - check the code
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
int i;
for (i = 0 ; i < 10; i++)
{

if (i != 2 && i != 4)
{
_putchar(i + '0');
}
/*
*char i;
*for (i = 48 ; i < 58; i++)
*{
*_putchar(i + '0');
*/
}
_putchar('\n');
}