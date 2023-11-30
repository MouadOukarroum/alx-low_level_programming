#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums a variable number of args
 * @n: number of arguments
 * Return: the sum of args
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int res = 0;

	if (n == 0)
		return (0);
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		res = res + va_arg(args, int);
	}
	va_end(args);

	return (res);
}
