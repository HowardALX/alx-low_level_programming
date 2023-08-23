#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: Input value
 * @src: Input value
 * Return: void
 */
char *_strncat(char *dest, char *src)
{
	int l;
	int m;

	l = 0;
	while (dest[l] != '\0')
	{
		l++;
	}
	m = 0;
	while (src[m] != '\0')
	{
		dest[l] = src[m];
		l++;
		m++;
	}
	dest[l] = '\0';
	return (dest);
}
