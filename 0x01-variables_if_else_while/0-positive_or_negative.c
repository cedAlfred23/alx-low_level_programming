#include <stdlib.h>
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
		printf("%d\n is positive", n);
	else if (n < 0)
		printf("%d\n is negative", n);
	else
		printf("%d\n is zero", n);
	return (0);
}
