#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct type - struct for datat types and func associated
 * @ph: placeholder
 * @f: function associated
 */

typedef struct type
{
	char *ph;
	void (*f)(char *, va_list);
} type;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
