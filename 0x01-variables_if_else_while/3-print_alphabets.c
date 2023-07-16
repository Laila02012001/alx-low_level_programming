#include <stdio.h>


/**
 * main - Entry point
 *Description: 'prints the alphabet in lowercase then in uppercase'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);
	for (l = 'A'; l <= 'Z'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
