#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - Entry point
 *
 * Result: Always 0 (success)
 */

int main(void)
{
	int n = rand();

	if (n > 0)
		printf("%d is positive",n);
	else if (n < 0)
		printf("%d is negative",n);
	else
		printf("%d is zero",n);
	return(0);


}
