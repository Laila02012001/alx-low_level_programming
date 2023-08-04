#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the minimum number of coins
 * @argc: integer
 * @argv: String
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int l, laila, lola = 0;
	int tab[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else if (atoi(argv[1]) >= 0)
	{
		laila = atoi(argv[1]);
		while (laila != 0)
		{
			for (l = 0; l < 5; l++)
			{
				if (laila >= tab[l])
				{
					laila -= tab[l];
					lola++;
					break;
				}
			}
		}
		printf("%d\n", lola);
	}
	return (0);
}
