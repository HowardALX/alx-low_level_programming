#include "main.h"
/**
 * more_numbers - function prints 10 times the digits from 0 to 14
 * To be followed by a new line
 */
void more_numbers(void)
{
	int k;
	int l;

	for (k = 0; k < 10; k++)
	{
		for (l = 0; l < 15; l++)
		{
			if (l >= 10)
			_putchar(l / 10 + '0');
			_putchar(l % 10 + '0');
		}
		_putchar('\n');
	}
}
