#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: char
 * Return: nothing
 */
void puts_half(char *str)
{
	int l, laila;

	laila = strlen(str);
	if (laila % 2 == 0)
		for (l = laila / 2; l < laila; l++)
			printf("%c", str[l]);
	else
		for (l = laila / 2 + 1; l < laila; l++)
			printf("%c", str[l]);
	printf("\n");
}
