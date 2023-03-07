#include "main.h"

/**
 * _memset - fills the first n bytes of memory area pointed to by s
 * @s: useless string
 * @b: constant byte b
 * @n: unassigned int
 *
 * Return: Char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

