#include "main.h"

/**
 * print_alphabet - print all alphabets
 * This program will print alphabets in lower case
 * @void: Prints alphabets
 */

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	{
		_putchar('\n');
	}
}

