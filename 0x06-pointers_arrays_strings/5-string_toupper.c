#include "main.h"
#include <ctype.h>
/**
 * islower - This function checks for lowercases
 * string_toupper - This function changes lowercase string to uppercase
 * @str: Lowercase string to be changed to uppercase
 * Return: (str)
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	if (islower(*ptr))
	{
		*ptr = toupper(*ptr);
	}
	ptr++;
	return (str);
}

