#include "main.h"

/**
 * flip_bits - returns the number of bits 
 * you would need to flip to get 
 * from one number to another.
 * @n: number1
 * @m: number2
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned long int curr;
	unsigned long int x = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = x >> i;
		if (curr & 1)
			x++;
	}

	return (x);
}

