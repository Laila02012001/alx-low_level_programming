#include <stdio.h>
/**
 *main - print the largest prime factor of the number 612852475143
 *Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int n = 612852475143, l, and;

	for (l = 2; l <= n; l++)
	{
		if (n % l == 0)
		{
			n = n / l;
			and = l;
		}
	}
	printf("%lu\n", and);
	return (0);
}
