#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int l = 0;

	while (s[l])
	{
		if (s[l] < '0' || s[l] > '9')
			return (0);
		l++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int laila1, laila2, laila, l, one, lola1, lola2, *fin, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	laila1 = _strlen(s1);
	laila2 = _strlen(s2);
	laila = laila1 + laila2 + 1;
	fin = malloc(sizeof(int) * laila);
	if (!fin)
		return (1);
	for (l = 0; l <= laila1 + laila2; l++)
		fin[l] = 0;
	for (laila1 = laila1 - 1; laila1 >= 0; laila1--)
	{
		lola1 = s1[laila1] - '0';
		one = 0;
		for (laila2 = _strlen(s2) - 1; laila2 >= 0; laila2--)
		{
			lola2 = s2[laila2] - '0';
			one += fin[laila1 + laila2 + 1] + (lola1 * lola2);
			fin[laila1 + laila2 + 1] = one % 10;
			one /= 10;
		}
		if (one > 0)
			fin[laila1 + laila2 + 1] += one;
	}
	for (l = 0; l < laila - 1; l++)
	{
		if (fin[l])
			a = 1;
		if (a)
			_putchar(fin[l] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(fin);
	return (0);
}
