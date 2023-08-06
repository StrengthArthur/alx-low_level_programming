#include "main.h"
/**
 * _memset - This function fills a block of memory with a constant byte
 * @s: Pointer to the memory to be filled
 * @b: This is the constant byte
 * @n: Number of bytes
 * Return: New value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
