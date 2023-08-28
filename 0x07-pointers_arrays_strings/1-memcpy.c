#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: Memory where is stored
 * @src: Memory where is copied
 * *@n: Number of bites
 *
 * Return: Copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int h = 0;
	int g = n;

	for (; h < g; h++)
	{
		dest[h] = src[h];
		n--;
	}
	return (dest);
}
