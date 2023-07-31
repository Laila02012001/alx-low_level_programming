#include "main.h"
/**
* print_chessboard - Print the chessboard
* @a: string
* Return: nothing
*/
void print_chessboard(char (*a)[8])
{
	int l, o;

	for (l = 0; l < 8; l++)
	{
		for (o = 0; o < 8; o++)
		{
			_putchar(a[l][o]);
		}
		_putchar('\n');
	}
}
