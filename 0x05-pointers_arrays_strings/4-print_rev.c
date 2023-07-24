#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - print a string, in reverse, followed by a new line
 * @str: char
 * Return: nothing
 */
void print_rev(char *str)
{
	int l, laila;

	laila = strlen(str) - 1;
	for (l = laila; l >= 0; l--)
	{
		printf("%c", str[l]);
	}
	printf("\n");
}
