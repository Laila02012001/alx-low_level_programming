#include <stdio.h>
/**
 * main - print the first 50 Fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	int laila;

	unsigned long fib1 = 0, fib2 = 1, sum;

	for (laila = 0, laila < 50; laila++;)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		fib1 = fib2;
		fib2 = sum;
		if (laila == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}
