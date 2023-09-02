#include "main.h"
/**
 * _strpbrk - func program entry point
 * @s: Input
 * @accept: Input
 * Return: 0 always
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			return (s);
		}
	s++;
	}
	return ('\0');
}
