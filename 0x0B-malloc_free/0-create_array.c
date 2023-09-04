#include "main.h"
#include <stdlib.h>
/**
 * create_array - func that create array size and initializes it char c
 * @size: Size of Array
 * @c: Char to initializes
 * Description: Create array of size and initialize char c
 * Return: Pointer to array, if fail NULL
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int j;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		str[j] = c;
	return (str);
}
