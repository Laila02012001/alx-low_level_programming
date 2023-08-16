#include "3-calc.h"

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int l, o;
	int (*laila)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	laila = get_op_func(argv[2]);

	if (laila == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	l = atoi(argv[1]);
	o = atoi(argv[3]);

	printf("%d\n", laila(l, o));
	return (0);
}
