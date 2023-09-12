#include <stdio.h>
/**
 * print_sign - prints the sign of a number and returns
 * 1 if positive, 0 if zero, -1 if negative.
 * @n: The number
 * Return: 1 if positive, 0 if zero, -1 if negative
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
