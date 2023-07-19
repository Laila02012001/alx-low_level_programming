#include <stdio.h>
/**
 *main - Print the first 50 Fibonacci numbers
 *
 *Return: Always 0
 */
int main(void)
{
	unsigned long int a, b, c, sum;

	a = 0;
	b = 0;
	c = 1;
	sum = 0;
	while (a <= 4000000)
	{
		a = b + c;
		b = c;
		c = a;
		if (a % 2 == 0)
			sum += a;
	}
	printf("%lu\n", sum);
	return (0);
}
