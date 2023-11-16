#include "main.h"


int isprime(int num, int num2);
/**
 * is_prime_number - check is a number is a prime number or not
 * @n: the number to be checked
 * Return: returns 1 if n is prime and -1 if it's not.
 */

int is_prime_number(int n)
{
	return (isprime(n, 2));
}


/**
 * isprime - checks if a num is prime using recursion
 * @num: the number to be checkd
 * @num2: the number num will be devided by, it's initially 2
 * Return: is the return 1 if num is prime, otherewise 0
 */

int isprime(int num, int num2)
{
	if (num <= 1)
	{
		return (0);
	}
	else if (num % num2 == 0 && num > num2)
	{
		return (0);
	}
	else if (num == num2)
	{
		return (1);
	}
	else
	{
		return (isprime(num, (num2 + 1)));
	}
}
