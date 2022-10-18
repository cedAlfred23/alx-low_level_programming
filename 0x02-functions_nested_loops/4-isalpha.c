#include "main.h"

/**
 * _isalpha - checks for lowercase character
 * @c: the character to check
 * Return: 0 on success
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z')|| (c >= 'A' && c <= 'Z'));
}

