#include "main.h"
/**
 * _strcmp - This function compares two strings
 * @s1: This is the firts string to be compared
 * @s2: This is the second string to be compared
 * Return: *s1 - *s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)

		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
