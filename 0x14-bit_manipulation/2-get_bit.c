#include "main.h"

/**
 * get_bit - return the value  index.
 * @n:  long int input.
 * @index: index  bit.
 *
 * Return: value  bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int index_1;

	if (n == 0 && index < 64)
		return (0);

	for (index_1 = 0; index_1 <= 63; n >>= 1, index_1++)
	{
		if (index == index_1)
		{
			return (n & 1);
		}
	}

	return (-1);
}

