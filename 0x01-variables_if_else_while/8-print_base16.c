#include <stdio.h>

/**
 * displays  number of base 16
 *
 * Ret
 */

int main(void)
{
	int c;
	char l;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}

