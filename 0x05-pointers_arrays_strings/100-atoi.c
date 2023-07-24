#include "main.h"
/**
 *_atoi - convert a string to an integer
 *@s: the string to be changed
 *Return: nothing
 */
int _atoi(char *s)
{
	int l = 1;
	unsigned int laila = 0;

	do {
		if (*s == '-')
			l *= -1;
		else if (*s >= '0' && *s <= '9')
			laila = laila * 10 + (*s - '0');
		else if (laila > 0)
			break;
	} while (*s++);
	return (laila * l);
}
