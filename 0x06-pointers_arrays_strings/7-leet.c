#include "main.h"

/**
 * leet - function to uncode a string.
 * @str: the string.
 *
 * Return: return the new value.
 */
char *leet(char *str)
{
	int l = 0, o;
	char cd[] = "aA4eE3oO0tT7lL1";

	while (*(str + l) != '\0')
	{
		for (o = 0; o < 14; o += 3)
		{
			if (*(str + l) == *(cd + o) || *(str + l) == *(cd + o + 1))
			{
				*(str + l) = *(cd + o + 2);
			}
		}
		l++;
	}
	return (str);
}
