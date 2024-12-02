#include "main.h"

/**
 * handler - Parses the format string and handles specifiers.
 * @str: The format string.
 * @list: The list of arguments.
 *
 * Return: Total number of characters printed, or -1 on error.
 */
int handler(const char *str, va_list list)
{
	int size = 0;
	int i = 0;
	int aux;
	
	if (str == NULL)
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '%')
		{
			aux = percent_handler(str, list, &i);
			if (aux == -1)
				return (-1);
			size += aux;
			continue;
		}
		if (_putchar(str[i]) == -1)
			return (-1);
		size++;
	}

	return (size);
}

/**
 * percent_handler - Handles the '%' format specifier.
 * @str: The format string.
 * @list: The list of arguments.
 * @i: Pointer to the current index in the format string.
 *
 * Return: Number of characters printed, or -1 on error.
 */
int percent_handler(const char *str, va_list list, int *i)
{
	int size = 0;

	*i += 1;

	if (str[*i] == '\0')
		return (-1);

	if (str[*i] == '%')
	{
		if (_putchar('%') == -1)
			return (-1);
		return (1);
	}
	else if (str[*i] == 'c')
	{
		size = print_char(list);
	}
	else if (str[*i] == 's')
	{
		size = print_string(list);
	}
	else if (str[*i] == 'r')
	{
		size = print_rev_string(list);
	}
	else
	{
		if (_putchar('%') == -1)
			return (-1);
		if (_putchar(str[*i]) == -1)
			return (-1);
		size = 2;
	}
	
	return (size);
}
