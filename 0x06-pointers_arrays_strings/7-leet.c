#include "main.h"
/**
 * leet - a func that encode into 1337speak
 * @n: Input value
 * Return: n value
 */
char *leet(char *n)
{
	int k;
	int l;
	char s1[] = "aAeEo0tTlL";
	char s2[] = "4433007711";

	for (k = 0; n[k] != '\0'; k++)
	{
		for (l = 0; l < 10; l++)
		{
			if (n[k] == s1[l])
			{
				n[k] = s2[l];
			}
		}
	}
	return (n);
}
