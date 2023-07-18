#include "main.h"
/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase
* followed by a new line
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int l, a;

	for (a = 0; a < 10; a++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
	_putchar('\n');
	}
}
