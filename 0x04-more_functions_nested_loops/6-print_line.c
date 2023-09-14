#include <stdio.h>
#include "main.h"
/**
 * print_line - Draws a straight line in the terminal
 * @n: The number of times an underscore is printed
 */
void print_line(int n)
{
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		c = 1;
		while (c <= n)
		{
		putchar('_');
		c++;
		}
	}
	putchar('\n');
}
