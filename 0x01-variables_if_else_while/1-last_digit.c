#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int is;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	is = n % 10;
	if (is > 5)
	{
		printf("the last digit of %d is greater than 5: the string and %d greater than 5\n", n, is);
	}
	else if (is == 0)
	{
		printf("the last digit of %d is 0: the string and %d 0\n", n, is);
	}
	else
	{
		printf("the last digit of %d is less than 6 and not 0: the string and %d less than 6 and not 0\n", n, is);
	}
	return (0);
}
