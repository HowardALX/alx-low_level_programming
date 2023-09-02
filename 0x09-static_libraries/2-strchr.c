#include "main.h"
/**
 * _strchr - function that program entry point
 * @s: Value of input
 * @c: value of input
 * Return: 0 always
 */
char *_strchr(char *s, char c)
{
	int m = 0;

	for (; s[m] >= '\0'; m++)
	{
		if (s[m] == c)
			return (&s[m]);
	}
	return (0);
}
