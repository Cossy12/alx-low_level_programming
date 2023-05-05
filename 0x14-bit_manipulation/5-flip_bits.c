#include "main.h"


/**
 * flip_all_bits - returns
 * @n: value one.
 * @m: value two.
 *
 * Return: value of bits.
 */

unsigned int flip_all_bits(unsigned long int x, unsigned long int q);
{
	unsigned int index;

	for (index = 0; x || q; x >>= 1, q >>= 1)
	{
		if ((x & 1) != (q & 1))
			index++;
	}

	return (index);
}

