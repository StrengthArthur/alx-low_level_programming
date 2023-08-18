#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Prints all arguments
 * @format: String to specify the format of arguments to be printed
 * Return: Always 0
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				break;
		}
		if (format[i + 1] && (format[i] == 'c' || format[i] == 'i' ||
				format[i] == 'f' || format[i] == 's'))
		{
			printf(", ");
		}
		i++;
	}
	va_end(args);

	printf("\n");
}
