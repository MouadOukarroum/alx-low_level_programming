#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/**
 * print_strings - print a var num of strings
 * @separator: a string to separate outputs
 * @n: number of strings passed
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (separator && i != (n - 1))
		{
			if (str)
				printf("%s%s", str, separator);
			else
				printf("%s%s", "(nil)", separator);
		}
		else
		{
			if (str)
				printf("%s", str);
			else
				printf("%s", "(nil)");
		}
	}
	printf("\n");
	va_end(args);
}
