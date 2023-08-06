#include "main.h"
/**
 * _strlen - Counts the length of a string
 * @s: String to be counted
 * Return: (x)
 */
int _strlen(char *s)
{

	int len = 0;
	int x;

	for (x = 0 ; s[x] != '\0'; len++)
		x++;
	return (x);
}
