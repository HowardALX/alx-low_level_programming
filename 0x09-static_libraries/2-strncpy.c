#include "main.h"
/**
 * _strncpy - func that program copy string
 * @dest: Value input
 * @src: value input
 * @n: value input
 *
 * Return: Dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l = 0;

	while (l < n && src[l] != '\0')
	{
		dest[l] = src[l];
		l++;
	}
	while (l < n)
	{
		dest[l] = '\0';
		l++;
	}
	return (dest);
}
