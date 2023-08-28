#include "main.h"
/**
 * _memset - a func that fill block of memory with specific value
 * @s: begining address of memory to be filled
 * @b: Desired value
 * @n: Digit of bytes to be changed
 *
 * Return: The changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int m = 0;

	for (; n > 0; m++)
	{
		s[1] = b;
		n--;
	}
	return (s);
}
