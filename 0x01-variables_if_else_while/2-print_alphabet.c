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
	char ch;
	for (ch='a'; ch<='z'; ch++)
		putchar(ch);
	return (0);
}
