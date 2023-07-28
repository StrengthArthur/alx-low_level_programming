#include "main.h"
/**
 * string_toupper - This function changes all lowercase string to uppercase
 * @str: Pointer to the string to be changed to uppercase
 * Return: (str)
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
	if (*ptr >= 'a' && *ptr <= 'z')
	{
		*ptr = *ptr - 'a' + 'A';
	}
	ptr++;
	}
	return (str);
}

