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
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5", n, m);
	if (m == 0)
		printf("Last digit of %d is %d and is 0", n, m);
	if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, m);
	return (0);
}