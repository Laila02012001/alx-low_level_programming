#include <stdio.h>
/**
 *main - print all arguments it receives
 *@argc: Integer
 *@argv: String
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int l;

	for (l = 0; l < argc; l++)
	{
		printf("%s\n", argv[l]);
	}
	return (0);
}
