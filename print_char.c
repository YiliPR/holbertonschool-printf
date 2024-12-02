#include "main.h"

/**
 * print_char - Prints a character.
 * @args: THe list of arguments.
 *
 * Return: the number of characters printed
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);
	if (_putchar(c) == -1)
		return (-1);
	return (1);
}
