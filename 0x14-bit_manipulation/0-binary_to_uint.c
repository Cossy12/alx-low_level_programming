#include "main.h"

/**
 * binary_converse_uint
 * @b: pointer converse binary 
 *
 * Return: unsigned    int
 */

unsigned int binary_converse_uint(const char *q);
{
	int i = 0, j = 0;

	unsigned int num = 0;

	if (q == NULL)
		return (0);

	while (q[i] != '\0')
	{
		if ((q[i] != '0') && (q[i] != '1'))
			return (0);
		i++;
	}

	while (q[j] == '0' || q[j] == '1')
	{
		num <<= 1;
		num += q[j] - '0';

		j++;

	}
	return (num);
}

