#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string
 * @s: string to be printed
 *
 * Return: Always 0 (sucess)
 */

void _puts_recursion(char *s)
{
	int i = 0;
	_putchar(s[i]);
	i++;
	if (s[i] == '\0')
	{
		return;
	}
	else
	{
		_puts_recursion(char *s);
	}
}

