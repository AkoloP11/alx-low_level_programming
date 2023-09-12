#include <stdio.h>
/**
 *_isalpha - checks if a variable is an alphabet
 *@c: variable to be checked
 * Return: 1 if true, 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
		return (0);
}
