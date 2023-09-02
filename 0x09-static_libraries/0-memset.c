#include "main.h"
/**
 * _memset - func fills block of memory with specific value
 * @s: start address memory to filled
 * @b: The expected value
 * @n: digit of bytes to changed
 *
 * Return: Changed array new value bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
