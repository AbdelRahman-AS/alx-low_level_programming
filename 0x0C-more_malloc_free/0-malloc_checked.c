#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
* malloc_checked - code
*@b: int
* Return: void.
*/

void *malloc_checked(unsigned int b)
{
	int *x;

	x = malloc(sizeof(b));
	if (x == NULL)
		exit(98);
	return (x);
}

