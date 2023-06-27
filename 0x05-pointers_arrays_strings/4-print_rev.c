#include "main.h"
#include <stdio.h>

void print_rev(char *s)
{
	int c = 0;

	/* Find the length of the string */
	while (s[c] != '\0')
	{
		c++;
	}

	/* Print the string in reverse order */
	for (int i = c - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}

	_putchar('\n');
}

