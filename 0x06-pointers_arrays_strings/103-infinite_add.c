#include "main.h"
/**
 * infinite_add - a func that adds two numbers
 * @n1: only digits in the strings
 * @n2: only digits in the strings
 * Return: return 0 if If the result can not be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(nl + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		j--;
		i++;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '0';
	rev_string(r);
	return (r);
}
