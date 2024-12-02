#include "main.h"

/**
 * print_rev_string - prints a string in reverse
 * @list: List of arguments containing the string to reverse
 *
 * Return: Number of characters printed, or -1 on error
 */
int print_rev_string(va_list list)
{
	char *str;
	int len = 0, i;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";

	while (str[len])
		len++;

	for (i = len - 1; i >= 0; i--)
	{
		if (_putchar(str[i]) == -1)
			return (-1);
	}
	
	return (len);
}
