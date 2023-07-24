#include "main.h"
#include <string.h>
/**
 * rev_string - reverse a string
 * @s: char
 * Return: nothing
 */
void rev_string(char *s)
{
	int l = 0, laila;
	char leila;

	laila = strlen(s) - 1;
	while (laila > l)
	{
		leila = s[l];
		s[l] = s[laila];
		s[laila] = leila;
		l++;
		laila--;
	}
}
