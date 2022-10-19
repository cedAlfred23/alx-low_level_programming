#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 time table
 * satarting with 0
 * Return 0 on success
 */
void times_table(void)
{
	int n = 9;
	int j = 0;

	while (j <= 12)
	{
		int r = n * j;

		printf("%d * %d = %d", n, j, r);
		j++;
	}

}
