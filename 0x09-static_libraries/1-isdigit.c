#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: The character to print
 * Return: 1 if it is a digit or 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
