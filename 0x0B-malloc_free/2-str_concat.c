#include <stdlib.h>
/**
* str_concat - concatenate two strings
* @s1: String
* @s2: String
* Return: null if size = 0 or String
*/
char *str_concat(char *s1, char *s2)
{
	char *l;
	int x = 0, y = 0, laila1 = 0, laila2 = 0;

	if (s1 != 0)
	{
		while (*(s1 + laila1))
			laila1++;
	}
	if (s2 != 0)
	{
		while (*(s2 + laila2))
			laila2++;
	}
	l = malloc(laila1 + laila2 + 1);
	if (l == 0)
		return (0);
	while (x < laila1)
	{
		l[x] = *(s1 + x);
		x++;
	}
	while (y < laila2)
	{
		l[x] = *(s2 + y);
		x++;
		y++;
	}
	return (l);
}
