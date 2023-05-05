#include "main.h"

/**
 * clear_all_bit - sets the value.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: if 1 else -1 .
 */

int clear_all_bit(unsigned long int *x, unsigned int l);
{
	unsigned int m;

	if (l > 63)
		return (-1);

	m = 1 << l;

	if (*x & m)
		*x ^= m;

	return (1);
}

