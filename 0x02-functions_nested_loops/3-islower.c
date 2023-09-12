#include <stdio.h>
#include "main.h"

/**
 * _islower - checks if a letter is lowercase
 * @c: The character collecting an argument
 * Return: 1 if true, 0 if false.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else

		return (0);

}
