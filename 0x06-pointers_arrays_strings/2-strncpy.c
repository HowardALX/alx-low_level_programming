#include "main.h"
/**
 * _strncpy - a function that copy a string
 * @dest: Input value
 * @src: Input value
 * @n: Input value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int w;

	w = 0;
	while (w < n && src[w] != '\0')
	{
		dest[w] = src[w];
		w++;
	}
	while (w < n)
	{
		dest[w] = '\0';
		w++;
	}
	return (dest);
}
