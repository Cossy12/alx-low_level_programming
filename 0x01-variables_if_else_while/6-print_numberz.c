#include <stdio.h>

/**
 *print single to base 10
 *
 * Return
 */

int main(void)
{
	int i, n;

	for (i = 10; i <= 19; i++)
	{
		n = i % 10;
		putchar (n % 10 + '0');
	}
	putchar('\n');
	return (0);
}

