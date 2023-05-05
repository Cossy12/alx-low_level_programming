#include "main.h"

/**
 * print- rep of unsigned int
 * @n: unsigned int
 *
 * Return: null
 */

void print_out_binary(unsigned long int x);
{
	int j;

	if (x > 1)
		print_binary(x >> 1);

	j = x & 1;

	_putchar(j + '0');
}

