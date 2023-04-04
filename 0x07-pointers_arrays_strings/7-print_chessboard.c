#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: array for the chessboard
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int o;
	int v;

	for (o = 0; o < 8; o++)
	{
		for (v = 0; v < 8; v++)
			_putchar(a[o][v]);
		_putchar('\n');
	}
}
