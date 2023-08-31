#include "main.h"

/**
 * get_bit - returns the number of 
* bits you would need to flip to get
* from one number to another.
 * @n: number
 * @index: index
 *
 * Return: number of bits
 */
int get_bit(unsigned long int n, unsigned int index)
{

	int x;

	if (index > 63)
		return (-1);

	x = (n >> index) & 1;
	return (x);

}

