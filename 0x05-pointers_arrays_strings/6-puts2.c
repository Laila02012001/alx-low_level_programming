#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - print every other character of a string
 * @str: char
 * Return: nothing
 */
void puts2(char *str)
{
	int l, laila;

	laila = strlen(str) - 1;
	for (l = 0; l <= laila; l++)
		if (l % 2 == 0)
			printf("%c", str[l]);
	printf("\n");
}
