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
		if (numbers < 9)
			putchar(numbers + '0');
		else
			putchar(letters);
		letters++;
		numbers++;
	}
	putchar('\n');
	return (0);


}
