#include "main.h"

/**
 * _printf - custom printf function made by us.
 *
 * @format: constant character pointer.
 *
 * Return: Characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	if (!format)
		return (-1);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;

			if (format[i] == 'c')
				count += print_char(va_arg(args, int));
			else if (format[i] == 's')
				count += print_string(va_arg(args, char *));
			else if (format[i] == 'd' || format[i] == 'i')
				count += print_int(va_arg(args, int));
			else if (format[i] == '%')
				count += _putchar('%');
			else if (format[i] == 'b')
				count += print_binary(va_arg(args, unsigned int));
			else
			{
				count += _putchar('%');
				count += _putchar(format[i]);
			}
		}
		else
		{
			count += _putchar(format[i]);
		}
		i++;
	}

	va_end(args);
	return (count);
}
