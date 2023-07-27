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
	int capitalize_next = 1;

	for(i = 0; str[i] != '\0'; i++)
	{
		if (is_separator(str[i]))
		{
			capitalize_next = 1;
		}
		else if (capitalize_next)
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
		capitalize_next = 0;
	}
	return (str);
}
