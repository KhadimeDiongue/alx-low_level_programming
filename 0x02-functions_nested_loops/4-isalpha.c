#include <stdio.h>

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: parameter to be checked for alphabetism
 *
 * Return: 1 if c is a letter, 0 if otherwise
 */

int _isalpha(int c)
{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

