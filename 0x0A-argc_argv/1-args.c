#include <stdio.h>
/**
 *main - Print nimber of arguments
 *@argc: Integer
 *@argv: String
 *Return: Always 0 (Success)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", --argc);
	return (0);
}
