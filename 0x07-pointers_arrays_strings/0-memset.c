#include "main.h"
/**
 * _memset - a func that fills memory with a constant byte.
 * @s: starting address of memory to be filled
 * @b: The desired value
 * @n: Digit of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int m = 0;

	for (; n > 0; m++)
	{
		s[m] = b;
		n--;
	}
	return (s);
}
