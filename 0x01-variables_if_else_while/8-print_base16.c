#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int numbers = 0;
	char letters = 'a';

	while (numbers < 16)
	{
		if (numbers < 10)
			putchar(numbers + '0');
		else if (numbers >= 10)
			putchar(letters);
	numbers++;
	letters++;
	}
	putchar('\n');
	return (0);


}
