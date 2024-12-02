#include "main.h"
#include <stdarg.h>

/**
 * _printf - Produces output according to a format.
 * @format: The format string containing xero or more directices
 *
 * Return: The number of characters printed (exluding the null byte).
 */
int _printf(const char *format, ...)
{
	va_list args;
	int size;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	size = handler(format, args);
	va_end(args);

	return (size);
}
