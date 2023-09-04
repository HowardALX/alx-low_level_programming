#include "main.h"
#include <stdlib.h>
/**
 * argstostr - func that concatenates all the arguments o
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int a, b, c;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	c = 0;
	for (a = 0; a < ac; a++)
		for (b = 0; av[a][b]; b++)
			c++;
	str = malloc(sizeof(char) * (c + 1));
	if (str == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
		for (b = 0; av[a][b]; b++)
			str[c++] = av[a][b];
	str[c] = '\0';
	return (str);
}
