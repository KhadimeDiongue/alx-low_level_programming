#include <stdio.h>

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: Always 0 (success)
 */

int print_alphabet_x10(void)
{
	int i;
	char letters = 'a';

	for (i = 1; i <= 10; i++)
	{
		while (letters >= 'z')
			putchar(letters);
	}
	putchar('\n');
	return (0);
}

