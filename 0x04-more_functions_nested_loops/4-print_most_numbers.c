#include "main.h"
/**
 * print_most_numbers - function checks for a digit
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int b;

	for (b = 48; b < 58; b++)
	{
		if (b != 50)
		{
			if (b != 52)
			{
				_putchar(b);
			}
		}
	}
	_putchar('\n');
}
