#include <stdio.h>
#include "main.h"
/**
 * _isupper - Detects if a character is upper or lowercase
 * @c: character to be checked
 * Return: 1 if uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
