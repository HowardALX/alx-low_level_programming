#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard.
 * @a: array
 * Return: always 0
 */
void print_chessboard(char (*a)[8])
{
	int r;
	int s;

	for (r = 0; r < 8; r++)
	{
		for (s = 0; s < 8; s++)
			_putchar(a[r][s]);
		_putchar('\n');
	}
}
