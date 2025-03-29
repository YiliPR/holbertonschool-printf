#include "main.h"

/**
 * print_int - prints an integer o integers.
 * @num: variable.
 * Return: the number of character printed.
 */

int print_int(int num)
{
	int count = 0;
	unsigned int n;
	char buffer[12];
	int i = 0;

	if (num < 0)
	{
		count += _putchar('-');
		n = -num;
	}
	else
	{
		n = num;
	}

	do {
		buffer[i++] = (n % 10) + '0';
		n /= 10;
	}
	while (n > 0)
		;

	while (i--)
	{
		count += _putchar(buffer[i]);
	}

	return (count);
}

/**
 * print_percent - Handles the %% specifier in _printf
 * Return: Number of characters printed (always 1)
 */

int print_percent(void)
{
	return _putchar('%');
}
