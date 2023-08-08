#include <stdio.h>
#include <stdlib.h>
/**
 * minCoins - Calculates the minimum number of coins needed
 * to make change for a given cents
 * @cents: This is the amount of cents to make change for
 * @coins: An array of coin values
 * @numCoins: This is the number of elements in the coin array
 * Return: numCoins
 */
int minCoins(int cents, int coins[], int numCoins)
{
	int i = 0;

	if (cents < 0)
	{
		return (0);
	}
	while (cents > 0)
	{
		numCoins += cents / coins[i];
		cents %= coins[i];
		i++;
	}
	return (numCoins);
}
/**
 * main - Prints the minimum number of coins needed to make for an amount
 * @argc: Counts the number of arguments
 * @argv: Array to a string argument
 * Return: 0 if exits successfully, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int cents;
	int numCoins = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}
	cents = atoi(argv[1]);
	numCoins = minCoins(cents, coins, numCoins);

	printf("%d\n", numCoins);

	return (0);
}
