#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int (l);
	for (l = 0; l <= 9; l++)
	{
		putchar(l);
		if (l == '9')
		{
			break;
		}
		putchar(',');
		putchar('l');
	}
	putchar('\n');
	return (0);
}
