#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * it will use at most n bytes from src
 * @dest: Input value
 * @src: Input value
 * @n: Input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int b;
	int c;

	b = 0;
	while (dest[b] != '\0')
	{
		b++;
	}
	c = 0;
	while (c < n && src[c] != '\0')
	{
		dest[b] = src[c];
		b++;
		c++;
	}
	dest[b] = '\0';
	return (dest);
}
