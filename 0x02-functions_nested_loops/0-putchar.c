#include <stdio.h>
#include <string.h>
/*
 *main - prints the string "_putchar"
 *return: 0 on success
 * */
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0 ; i < 8 ; i++)
	{
		_putchar(str[i]);
	}
	return (0);
}
