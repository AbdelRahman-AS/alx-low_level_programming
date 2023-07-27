#include "main.h"

/**
 * _strncpy - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 * @n: int
 * Return: a pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i =  0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
