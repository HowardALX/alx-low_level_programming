#include "main.h"
/**
 * print_line - function draws a straight line in the terminal
 * @n: number of time the character_sould be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int j;
		for (j = 1; j <= n; j++)
		{
			_putchar('_');
		}
			_putchar('\n');
	}
}
