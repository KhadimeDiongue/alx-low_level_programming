#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints string in reverse
 *
 * @s: value to be reversed
 * Return: void
 */

void print_rev(char *s)
{
	int length;

	for (length = 0; length != '\0'; length++)
	{
	}
	for (length = length - 1; length  >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
