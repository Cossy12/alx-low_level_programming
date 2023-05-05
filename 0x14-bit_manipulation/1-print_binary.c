#include "main.h"

/**
 * print_binary --- prints the binary int
 * @n:  int
 *
 * Return: null
 */

void print_binary(unsigned long int n)
{
	int index;

	if (n > 1)
		print_binary(n >> 1);

	index = n & 1;

	_putchar(index + '0');
}

