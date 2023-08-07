#include "main.h"
#include <stdlib.h>
/**
* argstostr - concatenate all the arguments of your program
* @ac: integer
* @av: string
* Return: poniter
*/

char *argstostr(int ac, char **av)
{
	int a, b, c, lola = 0, laila = 0;
	char *lol;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			lola++;
		lola++;
	}

	lol = malloc(sizeof(char) * (lola + 1));
	if (lol == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (c = 0; av[a][c] != '\0'; c++)
		{
			lol[laila] = av[a][c];
			laila++;
		}
		lol[laila] = '\n';
		laila++;
	}
	lol[laila] = '\0';

	return (lol);
}
