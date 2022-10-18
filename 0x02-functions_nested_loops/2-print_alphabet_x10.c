#include "main.h"
#include <stdio.h>

/**
 * main function prints 10 times the alphabet, in lowercase, followed by a new line.
 * Return: 0 on success
 * */
void print_alphabet_x10(void)
{
        char ch;
        int t = 0;

        while (t < 10)
        {
                for (ch = 'a' ; ch <= 'z' ; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');

		t++;
	}
}
