#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Produces output according to a format.
 * @format: Character string containing format specifiers.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	if (!format)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				char c = va_arg(args, int);
				count += write(1, &c, 1);
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);
				if (!str)
					str = "(null)";
				while (*str)
					count += write(1, str++, 1);
			}
			else if (*format == '%')
			{
				count += write(1, "%", 1);
			}
			else
			{
				count += write(1, "%", 1);
				count += write(1, format, 1);
			}
		}
		else
		{
			count += write(1, format, 1);
		}
		format++;
	}

	va_end(args);
	return (count);
}
