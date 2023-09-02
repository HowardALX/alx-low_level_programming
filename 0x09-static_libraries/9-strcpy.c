#include "main.h"
/**
 *char *_strcpy - func program copy string pointed to src
 * @dest: Copy to
 * @src: Copy from
 * Return: String value
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int m = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; m < l ; m++)
	{
		dest[m] = src[m];
	}
	dest[l] = '\0';
	return (dest);
}
