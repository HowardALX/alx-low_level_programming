#include "main.h"
/**
 * _puts - func program print string to stdout
 * @str: String to be printed
 * _putchar print new line
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\0');
}
