#include "main.h"


/**
 * flip_bits - return number of bits 
 *	one value to another
 * @n: value one.
 * @m: value two.
 *
 * Return: value of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int index_1;

	for (index_1 = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			index_1++;
	}

	return (index_1);
}

