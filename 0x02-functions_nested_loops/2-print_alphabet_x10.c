#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabets 10 times
 *
 * Return: Always 0(Success)
 */
void print_alphabet_x10(void)
{
	int i, b;

	i = 0;

	while (i <= 9)
	{
		b = 97;
		while (b <= 122)
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
		 i++;
	}
}
