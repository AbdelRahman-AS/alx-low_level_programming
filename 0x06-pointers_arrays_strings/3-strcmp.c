#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int x;

	for (i = 0; ; i++)
		if (s1[i] == s2[i])
		{
			x = 0;
			if (s1[i] == '\0')
				break;
		}
		else
		{
			x = s1[i] - s2[i];
			break;
		}
	return (x);
}

