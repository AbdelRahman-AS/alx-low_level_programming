#include "main.h"
/**
 * _isupper - Returns 1 if upper case, 0 if lower.
 * @c: Char to check
 * Return: Always 0.
 */
int _isupper(char c)
{
if (c < 91 && c > 64)
{
return (1);
}
else
{
return (0);
}
}
