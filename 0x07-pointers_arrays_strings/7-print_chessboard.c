#include "main.h"

/**
 * print_chessboard - print the chessboard, 2d array
 * @a: 2d array of chars
 *Return: void
 */
void print_chessboard(char (*a)[8])
{

	int f, g;

	f = 0;
	while (f < 8)
	{
		g = 0;
		while (g < 8)
		{
			_putchar (a[f][g]);
			g++;
		}
		_putchar ('\n');
		f++;
	}

}
