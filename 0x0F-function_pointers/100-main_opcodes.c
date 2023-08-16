#include <stdio.h>
#include <stdlib.h>

/**
 * main - print its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int laila, l;
	char *lola;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	laila = atoi(argv[1]);

	if (laila < 0)
	{
		printf("Error\n");
		exit(2);
	}

	lola = (char *)main;

	for (l = 0; l < laila; l++)
	{
		if (l == laila - 1)
		{
			printf("%02hhx\n", lola[l]);
			break;
		}
		printf("%02hhx ", lola[l]);
	}
	return (0);
}
