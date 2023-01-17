#include "main.h"
#include <stdio.h>

/**
 * _abs - prints the absolute value of an integer
 * @r: the int to check
 * Return: the absolute value of int
 */
int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	return (-r);
}
