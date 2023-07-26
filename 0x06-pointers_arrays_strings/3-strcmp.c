#include "main.h"

/**
* _strcmp - the function .
* @s1: 1st string.
* @s2: 2nd string.
* Return: return value.
*/
int _strcmp(char *s1, char *s2)
{
	int l, a = 0, b = 0, laila, o;

	while (*(s1 + a) != '\0')
		a++;
	while (*(s2 + b) != '\0')
		b++;
	if (a > b)
		o = a;
	else
		o = b;
	for (l = 0; l < o; l++)
	{
		if (*(s1 + l) < *(s2 + l) || *(s1 + l) > *(s2 + l))
		{
			laila = *(s1 + l) - *(s2 + l);
			break;
		}
		else
			laila = 0;
	}
	return (laila);
}
