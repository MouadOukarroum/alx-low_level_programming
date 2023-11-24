#include <stdlib.h>
#include <ctype.h>
#include "main.h"
#include <stdio.h>

void print_number(int n);


/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: arguments
 * Return: Error, 98 on failure, mul of num1 and num2 on success
 */

int main(int argc, char *argv[])
{
	char er[] = "Error";
	unsigned int i, j, k;
	int num1, num2, res;

	if (argc != 3)
	{
		for (i = 0; i < 5; i++)
			_putchar(er[i]);
		_putchar('\n');
		exit(98);
	}

	for (j = 0; argv[1][j]; j++)
	{
		if (!isdigit(argv[1][j]))
		{
			for (i = 0; i < 5; i++)
				_putchar(er[i]);
			_putchar('\n');
			exit(98);
		}
	}

	for (k = 0; argv[2][k]; k++)
	{
		if (!isdigit(argv[2][k]))
		{
			for (i = 0; i < 5; i++)
				_putchar(er[i]);
			_putchar('\n');
			exit(98);
		}
	}


	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	res = num1 * num2;

	print_number(res);
	_putchar('\n');
	return (0);
}

/**
 * print_number - prints a number
 * @n: the number to print.
 * Return: nothing; it's a void funtion
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10 != 0)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}
