#include <stdio.h>
/**
 * main - Entry point
 * @argc: counts number of arguments
 * @argv: array to string of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);
	return (0);
}
