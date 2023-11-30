#include "3-calc.h"

/**
 * op_add - sums two ints
 * @a: first int
 * @b: second int
 * Return: returns the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract b from a
 * @a: first number
 * @b: second number
 * Return: sub of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: mul of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide a by b
 * @a: first number
 * @b: second number
 * Return: division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calc the modulo of two nums
 * @a: first num
 * @b: second num
 * Return: modulo of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
