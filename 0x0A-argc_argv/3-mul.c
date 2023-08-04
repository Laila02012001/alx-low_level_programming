#include <stdio.h>
#include <stdlib.h>
/**
 *main -  multiplie two numbers
 *@argc: Integer
 *@argv: String
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int laila;

	if (argc == 3)
	{
		laila = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", laila);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
