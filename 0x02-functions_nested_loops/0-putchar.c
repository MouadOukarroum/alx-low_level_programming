#include "main.h"


/*
 * main - Entry point of the program
 *
 * Description: print _putchar to the console
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char word[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}
