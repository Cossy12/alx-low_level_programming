#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints a singly list
 * * @h: element
 *
 * Return: size
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);

}

