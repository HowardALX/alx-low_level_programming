#include "main.h"
/**
 * puts2 - fuunc must print only one character out of two
 * begining with the first one
 * @str: Input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int r = 0;
	char *s = str;
	int u;

	while (*s != '\0')
	{
		s++;
		longi++;
	}
	r = longi - 1;
	for (u = 0 ; u <= r ; u++)
	{
		if (u % 2 == 0)
	{
		_putchar(str[u]);
	}
	}
	_putchar('\n');
}
