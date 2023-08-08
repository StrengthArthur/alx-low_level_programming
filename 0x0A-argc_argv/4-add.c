#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: Counts number of arguments
 * @argv : array to string of arguments
 * Return: 1 and 0
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (pnumber(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%u\n", sum);
	return (0);
}

/**
 * pnumber - This function ckecks strings only
 * @num: checks string
 * Return: 1 Only digit, 0
 */

int pnumber(char *num)
{
	int i;

	for (i = 0; num[1] != '\0'; i++)
	{
		if (!isdigit(num[1]))
			return (0);
	}
	return (1);
}

