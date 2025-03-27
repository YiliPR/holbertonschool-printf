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
				(va_arg(args, int));
			else if (format[i] == 's')
				(va_arg(args, char *));
			else if (format[i] == 'd' || format[i] == 'i')
				(va_arg(args, int));
			else
			{
				count += ;
				count += ;
			}
		}
		else
			count +=
		i++;
	}
	va_end;
	return (count);
}
