#include <main.h>

/**
 * main function prints 10 times the alphabet, in lowercase, followed by a new line.
 * Return: 0 on success
 * */
int main(void)
{
        char ch;
        int t = 0;

        while (t < 10)
        {
                for (ch = 'a' ; ch <= 'z' ; ch++)
		{
			_putchar(ch);
		}
		_putchar("\n");

		t++;

		printf("\n");
	}
}
