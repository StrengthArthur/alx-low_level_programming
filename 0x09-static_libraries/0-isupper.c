#include "main.h"
/**
 * _isupper - checks for upper case characters
 * @c: The character to check
 * Return: 1 if c is upper case and 0 if c is lower case
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
