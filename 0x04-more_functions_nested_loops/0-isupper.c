#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: is the charater to check
 * Return: 0 on success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
