#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int numbers = 0;

	while (numbers < 16)
	{
		putchar(numbers + '0');
		numbers++;
	}
	putchar('\n');
	return (0);


}
