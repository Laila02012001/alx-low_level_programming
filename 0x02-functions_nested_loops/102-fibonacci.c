#include <stdio.h>
/**
 * main - print the first 50 Fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	unsigned long int a, b, abcd;
	int count;

	count = 1;
	a = 1;
	b = 2;
	printf("%lu, ", a);
	while (count <= 50)
	{
		count++;
		abcd = a + b;
		a = b;
		b = abcd;
		if (count == 50)
		{
			printf("%lu", a);
			break;
		}
		printf("%lu, ", a);
	}
	printf("\n");
	return (0);
}
