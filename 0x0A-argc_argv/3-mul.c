#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: counts number of arguments
 * @argv: array to string arguments
 * Return: Always 0 and 1
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
