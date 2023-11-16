#include "main.h"


int square(int num, int num1);

/**
 * _sqrt_recursion- calculates the square root of a given number
 * @n: the number which will be squared rooted
 * Return: return the square root of n
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - return the square root of n
 * @num: the num which we should find its root
 * @num1: initially is one but will change accordinly
 * Return: the square root of num
 */

int square(int num, int num1)
{
	int result = 0;

	if (num == 1)
	{
		result = 1;
	}
	else if (num1 * num1 == num)
	{
		result = num1;
	}
	else if (num1 * num1 < num)
	{
		result = square(num, (num1 + 1));
	}
	else
	{
		result = -1;
	}

	return (result);
}
