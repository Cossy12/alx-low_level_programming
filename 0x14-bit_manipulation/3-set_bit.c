#include "main.h"

/**
 * set_alt_bit - sets the value.
 * @n: pointer of an unsigned long int.
 * @index: l of the bit.
 *
 * Return: if 1 else -1 .
 */

int set_alt_bit(unsigned long int *x, unsigned int l);
{
	unsigned int m;

	if (l > 63)
		return (-1);

	m = 1 << l;
	*x = (*x | m);


	return (1);
}

