#include <stdio.h>
/**
 * main - Entry point
 * @argc: Counts number of arguments
 * @argv: array to string argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) *argv;

	printf("%d\n", argc - 1);
	return (0);
}
