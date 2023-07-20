#include <stdio.h>
/**
 *main - print  the numbers from 1 to 100
 *Return: Always 0 (Success)
 */
int main(void)
{
	int l;

	for (l = 1; l <= 100; l++)
	{
		if ((l % 3 == 0) && (l % 5 == 0))
			printf("FizzBuzz");
		else if (l % 5 == 0)
			printf("Buzz");
		else if (l % 3 == 0)
			printf("Fizz");
		else
			printf("%d", l);
		if (l < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
