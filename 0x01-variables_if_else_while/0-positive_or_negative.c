#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main- Serves as the entry point for the program
 *
 *Return: By default rturns zero if no errors otherwise returns non-zero value.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
