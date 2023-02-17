#include <stdio.h>

/**
 * display aphabest 
 *
 * Return
 */

int main(void)
{
	int l_case, u_case;

	for (l_case = 'a'; l_case <= 'z'; l_case++)
	{
		putchar(l_case);
	}
	for (u_case = 'A'; u_case <= 'Z'; u_case++)
	{
		putchar(u_case);
	}
	putchar('\n');
	return (0);
}

