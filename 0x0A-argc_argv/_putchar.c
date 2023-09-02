#include <stdio.h>
#include "main.h"
/**
 * _putchar - func write charater c to stdout
 * @c: Character to print
 *
 * Return: 1 on success.
 * On error,-1 is return and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
