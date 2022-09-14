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
	
	i = 1;
	while ( i >= 10)
	{
		while (letters <= 'z')
		{
			putchar(letters);
			letters++;
		}
	i++;
	}
	putchar('\n');
	return (0);
}

