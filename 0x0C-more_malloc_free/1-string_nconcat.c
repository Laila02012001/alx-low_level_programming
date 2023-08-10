#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: char
 * @s2: char
 * @n: integer
 * Return: pointer or 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *l;
	unsigned int a = 0, b = 0, laila1 = 0, laila2 = 0;

	while (s1 && s1[laila1])
		laila1++;
	while (s2 && s2[laila2])
		laila2++;

	if (n < laila2)
		l = malloc(sizeof(char) * (laila1 + n + 1));
	else
		l = malloc(sizeof(char) * (laila1 + laila2 + 1));

	if (!l)
		return (NULL);

	while (a < laila1)
	{
		l[a] = s1[a];
		a++;
	}

	while (n < laila2 && a < (laila1 + n))
		l[a++] = s2[b++];

	while (n >= laila2 && a < (laila1 + laila2))
		l[a++] = s2[b++];

	l[a] = '\0';

	return (l);
}
