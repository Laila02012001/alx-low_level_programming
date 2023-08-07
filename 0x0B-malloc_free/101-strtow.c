#include <stdlib.h>
/**
 * wrdcnt - split a string into words
 * @s:string
 * Return: integer
 */
char wrdcnt(char *s)
{
	int l, o = 0;

	for (l = 0; s[l]; l++)
	{
		if (s[l] == ' ')
		{
			if (s[l + 1] != ' ' && s[l + 1] != '\0')
				o++;
		}
		else if (l == 0)
			o++;
	}
	o++;
	return (o);
}
/**
 *strtwo - split a string into words
 *@str - string
 *Return: pointer
 */
char **strtwo(char *str)
{
	int a, b, c, d, x = 0, laila = 0;
	char **y;

	if (str == NULL || *str == '\0')
		return (NULL);
	x = wrdcnt(str);
	if (x == 1)
		return (NULL);
	y = (char **)malloc(x * sizeof(char *));
	if (y == NULL)
		return (NULL);
	y[x - 1] = NULL;
	a = 0;
	while (str[a])
	{
		if (str[a] != ' ' && (a == 0 || str[a - 1] == ' '))
		{
			for (b = 1; str[a + b] != ' ' && str[a + b]; b++)
				b++;
			y[laila] = (char *)malloc(b * sizeof(char));
				b--;
			if (y[laila] == NULL)
			{
				for (c = 0; c < laila; c++)
					free(y[c]);
				free(y[x - 1]);
				free(y);
				return (NULL);
			}
			for (d = 0; d < b; d++)
				y[laila][d] = str[a + d];
			y[laila][d] = '\0';
			y++;
			a += b;
		}
		else
			a++;
	}
	return (y);
}
