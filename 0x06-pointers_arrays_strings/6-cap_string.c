#include "main.h"
/**
 * is_separator - This function checks if the character is a separator
 * @chr: character to be checked
 * Return: 1 if the character is a separator, 0 otherwise
 */
int is_separator(char chr)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (chr == separators[i])
		{
			return (1);
		}
	}
	return (0);
}

/**
 * cap_string - function capitalizes the first letter of each word in a string
 * @str: This is the input string
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	int i;

	/* Capitalize the first character */
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	/* loop through the rest if the string */
	for (i = 1; str[i] != '\0'; i++)
	{
		/* if character is separator and next lowercase, capitalize */
		if (is_separator(str[i]) && str[i + 1] >= 'a' && str[i + 1] <= 'z')
		{
			str[i + 1] = str[i + 1] - 32;
		}
	}
	return (str);
}
