#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s: string
 * @c: string
 * Return: string
 */
char *_strchr(char *s, char c)
{
	int l = 0;

	while (*(s + l))
	{
		if (*(s + l) == c)
			return (s + l);
		l++;
	}
	if (*(s + l) == c)
		return (s + l);
	return (0);
}
