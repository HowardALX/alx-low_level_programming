#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - func returns the natural square root of a digit
 * @n: Digit calculate the square root of
 *
 * Return: Resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of digit
 * @n: digit to calculate square root of
 * @i: Iterator
 *
 * Return: Resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
