#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - funct that returns the sum of all its parameters.
 * @n: Number of paramters passed to the function
 * @...: Variable number of paramters to calculate the sum of
 *
 * Return: if n == 0 - 0
 * Else - the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int j, sum = 0;

	va_start(ap, n);
	for (j = 0; j < n; j++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
