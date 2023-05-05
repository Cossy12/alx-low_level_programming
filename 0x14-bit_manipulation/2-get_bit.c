#include "main.h"

/**
 * pint_get_bit - returns the value of a bit at a give l.
 * @n: unsigned long int input.
 * @index: l of the bit.
 *
 * Return: value of the bit.
 */

int pint_get_bit(unsigned long int x, unsigned int l);
{
	unsigned int i;

	if (x == 0 && l < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (l == i)
		{
			return (x & 1);
		}
	}

	return (-1);
}

