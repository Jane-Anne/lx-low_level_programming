#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point prints what random number is
 *
 * print whether random value is negative. zero or positive
 *
 * return: Always zero 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
