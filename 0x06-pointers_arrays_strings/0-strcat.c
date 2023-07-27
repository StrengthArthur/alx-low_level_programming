#include "main.h"
/**
 * _strncat - This function concatenates two strings
 * @dest: This is the buffer for the concatenated string
 * @src: The source string to be appended
 * @n: Number of bytes
 * Return: char (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}
	*dest_ptr = '\0';
	return (dest);
}
