#include "main.h"
/**
 * _atoi - func convert string to integer.
 * @s: String use in program
 *
 * Return: Integer
 */
int _atoi(char *s)
{
	int sig = 1, a = 0;
	unsigned int unsig = 0;

	while (!(s[a] <= '9' && s[a] >= '0') && s[a] != '\0')
	{
		if (s[a] == '-')
			sig *= -1;
		a++;
	}
	while (s[a] <= '9' && (s[a] >= '0' && s[a] != '\0'))
	{
		unsig = (unsig * 10) + (s[a] - '0');
		a++;
	}
	unsig *= sig;
	return (unsig);
}
