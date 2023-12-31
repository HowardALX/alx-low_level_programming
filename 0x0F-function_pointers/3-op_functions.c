#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - func that returns the sum of two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_mul - Returns product of two numbers.
 * @a: The first digit
 * @b: The second digit
 *
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two numbers
 * @a: The first digit
 * @b: The second digit
 *
 * Return: Quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of two numbers
 * @a: The first digit
 * @b: The second digit
 *
 * Return: Remainder of the division of aby b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
