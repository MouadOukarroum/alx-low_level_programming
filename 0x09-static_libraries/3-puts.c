#include "main.h"

void _puts(char *s)
{
    int i;

	for (i = 0; s[i] >= 0; i++)
	{
		if (s[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(s[i]);
	}
}