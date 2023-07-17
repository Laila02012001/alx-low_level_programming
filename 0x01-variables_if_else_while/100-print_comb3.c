#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l, l1;

	for (l = '0'; l <= '8'; l++)
	{
		for (l1 = l + 1; l1 <= '9'; l1++)
		{
			for (l1 = l + 1; l1 <= '9'; l1++)
			{
				putchar(l);
				putchar(l1);
				if (l == '8' && l1 == '9')
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
