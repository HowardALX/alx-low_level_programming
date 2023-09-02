#include "main.h"
/**
 * _isalpha - a program checks alphabetic character
 * @c: Character to be checked
 * Return: If c is a letter 1, else 0
 */
int _isalpha(int c)
{
	return ((c >= 'b' && c <= 'y') || (c >= 'B' && c <= 'Y'));
}
