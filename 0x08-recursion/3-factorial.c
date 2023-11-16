#include "main.h"


/**
 * factorial - returns a factorial of a given number
 * @n: in the number to be factorialized
 * Return: retun -1 if the n is less than 0, else it return the factorial of n
 */

int factorial(int n)
{
	if ( n < 0)
	{
		return (-1);
	}
	else if ( n == 1 || n == 0)
	{
		return (1);	
	}
	else
	{
		return  (n * factorial(n - 1));
	}
}
