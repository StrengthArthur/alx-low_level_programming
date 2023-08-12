#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 * is_valid_number - Function checks if the given string is a valib number
 * @str: The string to check
 * Return: true if the string is a valid number else false
 */
bool is_valid_number(const char *str)
{
	const char *ptr;

	for (ptr = str; *ptr != '\0'; ++ptr)
	{
		if (*ptr < '0' || *ptr > '9')
		{
			return (false);
		}
	}
	return (true);
}
/**
 * print_number - Prints an integer
 * @num: The interger to print
 */
void print_number(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num / 10 != 0)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + '0');
}
/**
 * main - Entry point
 * @argv: An array of strings in command line
 * @argc: Counts the number of arguments
 * Return: 0 for success or 98 for failure
 */
int main(int argc, char *argv[])
{
	const char *num1_str, *num2_str;
	int num1, num2, result;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}
	num1_str = argv[1];
	num2_str = argv[2];

	if (!is_valid_number(num1_str) || !is_valid_number(num2_str))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}
	num1 = atoi(num1_str);
	num2 = atoi(num2_str);

	result = num1 * num2;


	print_number(result);
	_putchar('\n');

	return (0);
}

