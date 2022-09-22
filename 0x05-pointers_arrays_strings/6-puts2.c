#include "main.h"
#include <stdio.h>

/**
 * puts2 - print every other character
 *
 * @str: value passed from main
 * Return: void
 */

void puts2(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count+=2)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
