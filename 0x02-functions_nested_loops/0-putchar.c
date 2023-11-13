#include "main.h"

/*
 * main - Entry point
 * char is the word to be printed
 * Description: this code prints _putchar to
 * the console using _putchar prototye
 * Return: always 0 (success)
 */
int main(void)
{
	char word[] = "_putchar";
	int index;

	for (index = 0; index < 8; index++)
	{
		_putchar(word[index]);
	}
	_putchar('\n');
	return (0);
}
