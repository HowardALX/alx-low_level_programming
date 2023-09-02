#include <stdio.h>
#include "main.h"
/**
 * main - program that prints arguments it receives.
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
	{
		printf("%s\n", argv[m]);
	}
	return (0);
}
