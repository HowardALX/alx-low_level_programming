#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: array
 * @n: the number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int m;
	int r;

	for (m = 0; m < n--; m++)
	{
		r = a[m];
		a[m] = a[n];
		a[n] = r;
	}
}
