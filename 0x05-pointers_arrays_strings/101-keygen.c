#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - generate random valid passwords for the program 101-crackme
 *Return: returnt 0
 */
int main(void)
{
	char a;
	int b;

	srand(time(0));

	while (b <= 2645)
	{
		a = rand() % 128;
		b += a;
		putchar(a);
	}
	putchar(2772 - b);
	return (0);
}
