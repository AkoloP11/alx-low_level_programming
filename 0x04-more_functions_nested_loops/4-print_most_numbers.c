#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - Prints numbers except 2 and 4,
 * followed by a new line
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if ((c == 50)
			|| (c == 52))
		{
			continue;
		}
		_putchar(c);
	}
	_putchar('\n');
}
