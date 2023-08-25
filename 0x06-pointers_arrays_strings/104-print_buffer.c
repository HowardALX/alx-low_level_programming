#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: Size
 * Retturn: void
 */
void print_buffer(char *b, int size)
{
	int p, m, n;

	p = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (p < size)
	{
		m = size - p < 10 ? size - p : 10;
		printf("%08x:", p);
		for (n = 0; n < 10; n++)
		{
			if (n < m)
				printf("%02x", *(b + p + n));
			else
				printf(" ");
			if (n % 2)
			{
				printf(" ");
			}
		}
		for (n = 0; n < m; n++)
		{
			int c = *(b + p + n);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		p += 10;
	}
}
