#include "main.h"
/**
 * _strcat - This function concatenates two strings
 * @dest: This is the buffer for the concatenated string
 * @src: The source string to be appended
 * Return: Pointer to the destination buffer (char *)
*/
char *_strcat(char *dest, char *src)
{

	char *new_string = dest;

	while (*new_string != '\0')
	{
		new_string++;
	}

	while (*src != '\0')
	{
		*new_string++ = *src++;
	}
	*new_string = '\0';

		return (dest);
}
