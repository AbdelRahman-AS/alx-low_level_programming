#include "main.h"
#include <stdio.h>

/**
 *_strlen - str length
 *@s: dsfsf
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
int i;
i = 0;
while (1)
{
if (*(s + i) == '\0')
{
break;
}
else
{
i++;
}
}
return (i);
}
