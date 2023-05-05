#include "main.h"

/**
 * clear_bit - sets the value to 0. 
 * @n: pointer long int.
 * @index: value of the bit.
 *
 * Return: if 1 ,else  -1 .
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int index_1;

	if (index > 63)
		return (-1);

	index_1 = 1 << index;

	if (*n & index_1)
		*n ^= index_1;

	return (1);
}

