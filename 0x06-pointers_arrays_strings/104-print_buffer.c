#include "main.h"
#include <stdio.h>
/**
 * print_buffer - print a buffer
 * @b: integer
 * @size: integer
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
	int l, o, laila = 0;
	int p[] = {0, 0, 0, 0, 0, 0, 0, 0};

	if (size <= 0)
	       printf("\n");
	for (l = 0; *(b + l); l++)
	{
		for (o = 0; o < 8; o++)
		{
			if (p[o] == 0)
				printf("%x", p[o]);
			else
			{
				laila = laila * 10 + p[o];
			}
		}
		printf("%x", laila);
		for (o = l; o < l + 10; o++)
		{
			if (o % 2 == 0)
				printf(" ");
			printf("%x", *(b + o));
		}
		for (o = l; o < l + 10; o++)
		{
			printf("%c", *(b + o));
		}
		printf("\n");
		l = l + 10;
	}
}
