#include "main.h"

/**
 * set_bit - set bit to 1. 
 * @n: pointer of  long int.
 * @index: index of the bit.
 *
 * Return: if 1 else -1 .
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int index_1;

	if (index > 63)
		return (-1);

	index_1 = 1 << index;
	*n = (*n | index_1);


	return (1);
}

