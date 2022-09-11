#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alphabet = 'a';
	char uppercase = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while(uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');
	return (0);

}
