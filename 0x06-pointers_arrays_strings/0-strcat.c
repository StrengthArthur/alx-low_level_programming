#include "main.h"
/**
 * _strcat - This function concatenates two strings
 * @dest: This is the buffer for the concatenated string
 * @src: The source string to be appended
 * Return: char (dest)
 */
char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}
	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}
	*dest_ptr = '\0';
	return (dest);
}
