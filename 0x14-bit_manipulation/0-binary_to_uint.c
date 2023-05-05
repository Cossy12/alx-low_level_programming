#include "main.h"

/**
 * binary_to_uint -  binary to int
 * @b: pointer to binary value
 *
 * Return:  int
 */

unsigned int binary_to_uint(const char *b)
{
	int index = 0, index_1 = 0;

	unsigned int value = 0;

	if (b == NULL)
		return (0);

	while (b[index] != '\0')
	{
		if ((b[index] != '0') && (b[index] != '1'))
			return (0);
		index++;
	}

	while (b[index_1] == '0' || b[index_1] == '1')
	{
		value <<= 1;
		value += b[index_1] - '0';

		index_1++;

	}
	return (value);
}

