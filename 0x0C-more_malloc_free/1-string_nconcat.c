#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes from s2 to concatenate
 * Return: Pointer to the concated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, total_len;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s1 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	total_len = len1 + n + 1;
	result = (char *)malloc(total_len);

	if (result == NULL)
	{
		return (NULL);
	}
	strncpy(result, s1, len1);
	strncpy(result + len1, s2, n);
	result[len1 + n] = '\0';

	return (result);
}
