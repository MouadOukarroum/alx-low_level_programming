#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>




/**
 * charr - prints char
 * @separator: sperates ouput
 * @args: argument pointer
 */

void charr(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * intt - prints int
 * @separator: sperates ouput
 * @args: argument pointer
 */

void intt(char *separator, va_list args)
{
	printf("%s%d", separator, va_arg(args, int));
}

/**
 * floatt - prints int
 * @separator: sperates ouput
 * @args: argument pointer
 */

void floatt(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}


/**
 * string - prints int
 * @separator: sperates ouput
 * @args: argument pointer
 */

void string(char *separator, va_list args)
{
	char *str = va_arg(args, char *);

	switch ((int)(!str))
		case 1:
			str = "(nil)";

	printf("%s%s", separator, str);
}

/**
 * print_all - prints whatever passed to it
 * @format: is the format of the passed args
 * Return: nothing
 */


void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list args;
	type types[] = {
		{"c", charr},
		{"i", intt},
		{"f", floatt},
		{"s", string},
		{NULL, NULL}
	};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (types[j].ph)
		{
			if (format[i] == types[j].ph[0])
			{
				types[j].f(separator, args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
