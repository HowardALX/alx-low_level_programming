#include "main.h"
/**
 * _isupper - func that check if uppercase letters
 * @c: Char to check
 *
 * Return: uppercase return 1, else return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	return (0);
}
