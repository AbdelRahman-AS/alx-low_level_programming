#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: a pointer to the resulting string
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int x;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
		if (s1 == s2)
			x = 0;
		else if (s1 > s2)
		{
			x = 15;
			break;
		}
		else
		{
			x = -15;
			break;
		}

	return (x);
}

