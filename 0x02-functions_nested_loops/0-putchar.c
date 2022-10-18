#include <main.h>

/**
 *main - prints the string "_putchar" to the output
 *Return: 0 on success
 */
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0 ; i < 8 ; i++)
	{
		_putchar(str[i]);
	}
	printf("\n");
	return (0);
}
