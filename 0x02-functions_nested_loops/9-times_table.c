#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 time table
 * satarting with 0
 * Return 0 on success
 */
void times_table(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (i <= 9)
	{
		while (j <= 9)
		{
			int k = i * j;

			printf("%d ", k);
			j++;
		}
		_putchat('\n');
		i++;
	}
}
