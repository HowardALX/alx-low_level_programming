#include "main.h"
#include <stdio.h>
/**
 * rot13 - a func that encodes a string using rot13
 * @s: Pointer to string Params
 * Return: *s
 */
char *rot13(char *s)
{
	int m;
	int k;
	char data1[] =
	"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] =
	"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (m = 0; s[m] != '\0'; m++)
	{
		for (k = 0; k < 52; k++)
		{
			if (s[m] == data1[k])
			{
				s[m] = datarot[k];
				break;
			}
		}
	}
	return (s);
}
