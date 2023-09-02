#include "main.h"
/**
 * _memcpy - func that copies memory location
 * @dest: where memory is kept
 * @src: wher memory is copied
 * @n: digit of bytes
 *
 * Return: copy memory n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
