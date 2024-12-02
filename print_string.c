#include "main.h"

/**
 * print_string - Prints a string.
 * @args: the list of arguments
 *
 * Return: The number of characters printed
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		if (_putchar(*str++) == -1)
			return (-1);
		count++;
	}
	
	return (count);
}
