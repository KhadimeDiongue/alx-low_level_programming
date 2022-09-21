#include <stdio.h>
#include "main.h"

/**
 *swap_int - swaps the values of the two integers.
 *@a: value to be evaluated.
 *@b: value to be evaluated.
 *Return: not.
 */

void swap_int(int *a, itn *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
