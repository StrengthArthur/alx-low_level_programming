#include "main.h"
/**
 * _strncat - This function concatenates two strings
 * @dest: buffer string to hold concatenated string
 * @src: string which will be appended
 * @n: number of allocated bytes
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

