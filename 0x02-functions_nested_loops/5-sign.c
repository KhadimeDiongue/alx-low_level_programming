#include <stdio.h>

/**
 * print_sign - prints the sign of a number
 *
 * @n: takes number to check the appropriate sign
 *
 * Return: 1 if n is greater than 0, 0 if n is zero, -1 if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar(0);
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}

}
