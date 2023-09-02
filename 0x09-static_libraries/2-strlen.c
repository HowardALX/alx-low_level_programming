#include "main.h"
/**
 * _strlen - func program returns length of a string
 * @s: String
 * Return: Length
 */
int _strlen(char *s)
{
	int longa = 0;

	while (*s != '\0')
	{
		longa++;
		s++;
	}
	return (longa);
}
