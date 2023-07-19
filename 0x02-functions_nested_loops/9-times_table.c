#include "main.h"
/**
 * times_table - print the 9 times table
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			_putchar(44);
			_putchar(32);
			c = a * b;
			if (c >= 10)
			{
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
			else
			{
				_putchar(32);
				_putchar(c + 48);
			}
		}
		_putchar('\n');
	}
}
