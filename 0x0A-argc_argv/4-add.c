#include <stdio.h>
#include <stdlib.h>
/**
 * main - Add numbers positive
 * @argc: integer
 * @argv: String
 * Return: on success 0 and 1 on fail
 */
int main(int argc, char *argv[])
{
	int laila = 0, l, o;

	for (l = 1; l < argc; l++)
	{
		for (o = 0; argv[l][o] != '\0'; o++)
		{
			if (!(argv[l][o] >= '0' && argv[l][o] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
		laila += atoi(argv[l]);
	}
	printf("%d\n", laila);
	return (0);
}
