#include <stdio.h>

/**
 * Prints character alphabet in lowercase
 *
 * Return
 */

int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

