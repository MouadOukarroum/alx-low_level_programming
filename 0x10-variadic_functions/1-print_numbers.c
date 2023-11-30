#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>


/**
 * print_numbers - prints variable num of nums
 * @separator: a string to print between nums
 * @n: num of nums
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 1; i <= n; i++)
	{
		if (separator && i != n)
			printf("%d%s", va_arg(args, int), separator);
		else
			printf("%d", va_arg(args, int));
	}
	printf("\n");
	va_end(args);
}
