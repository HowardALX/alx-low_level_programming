#include "main.h"
/**
 * print_square - func print square
 * @size: The size of a square
 * Description: only use _putchar to print. Use '#' to print the square.
 */
void print_square(int size)
{
	int m;
	int n;

	if (size < 1)
		_putchar('\n');
	while (n < size)
	{
		m = 0;
		while (m < size)
		{
			_putchar('#');
			m++;
		}
		_putchar('\n');
		n++;
	}
}
