#include <stdio.h>
#include "main.h"

/**
 * Print_alphabet - prints alphabets
 *
 *
 * Return: Always 0(Success)
 */
void print_alphabet(void)
{
	int i;

	i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}
