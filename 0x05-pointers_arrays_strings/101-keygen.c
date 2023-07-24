#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - entry point generates a random password
 *Return: the generated password
 */
int main(void)
{
	char l;
	int a;

	srand(time(0));

	while (a <= 2645)
	{
		l = rand() % 128;
		a += l;
		putchar(l);
	}
	putchar(2772 - a);
	return (0);
}
