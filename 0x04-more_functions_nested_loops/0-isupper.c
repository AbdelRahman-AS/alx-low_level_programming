#include "main.h"
#include <stdio.h>
/**
 * _isupper - Returns 1 if upper case, 0 if lower.
 * @c: char to be checked
 * Return: Always 0.
 */
int _isupper(char c)
{
if (c < 96)
{
return (1);
}
else
{
return (0);
}
}
