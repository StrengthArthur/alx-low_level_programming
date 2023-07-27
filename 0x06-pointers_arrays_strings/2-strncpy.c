#include "main.h"
/**
 * _strncpy - Copies a string
 * @dest: This is where the copied string will be appended to
 * @src: This is the source string to be copied
 * @n: This is the maximum num of char to be copied
 * Return: (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (n > 0 && *src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest_ptr = '\0';
		dest_ptr++;
		n--;
	}
	return (dest);
}
