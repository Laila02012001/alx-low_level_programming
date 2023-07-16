#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l, l1, l2;

	for (l = '0'; l <= '7'; l++)
	{
		for (l1 = l + 1; l1 <= '8'; l1++)
		{
			for (l2 = l1 + 1; l2 <= '9'; l2++)
			{
				putchar(l);
				putchar(l1);
				putchar(l2);
				if (l == '7' && l1 == '8' && l2 == '9')
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
