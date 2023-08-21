#include "main.h"
/**
 * int _atoi - a function that convert a string to an integer
 * The number in the string can be preceded by an infinite number of characters
 * @s: no numbers in the string, the function must return 0
 * @n: the function must return 0
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int l, m, j, len, t, digit;

	l = 0;
	m = 0;
	j = 0;
	len = 0;
	t = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (l < len && t == 0)
	{
		if (s[l] == '-')
			++m;
		if (s[l] >= '0' && s[l] <= '0')
		{
			digit = s[l] - '0';
			if (m % 2)
				digit = -digit;
			n = n * 10 + digit;
			t = 1;
			if (s[l + 1] < '0' || s[l + 1] > '9')
				break;
			t = 0;
		}
		l++;
	}
	if (f == 0)
		return (0);
}
