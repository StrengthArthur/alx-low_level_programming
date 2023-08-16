#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - This function prints a name
 * @name: Name of the person
 * @f: pointer to a function
 * Return: Always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	return;
	f(name);
}
