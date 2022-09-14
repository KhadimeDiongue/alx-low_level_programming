#include <stdio.h>

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: Always 0 (success)
 */

int print_alphabet_x10(void)
{
	int i;
	char letters;

	for (i = 0; i < 10; i++)
	{
		letters = 'a';
		while (letters <= 'z')
		{
			putchar(letters);
			letters++;
		}

	putchar('\n');
	}
	return (0);
}

