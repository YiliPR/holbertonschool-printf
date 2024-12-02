#include "main.h"

/**
 * print_char - prints a single character.
 *
 * @c: variable.
 *
 * Return: the character to print.
 */

int print_char(char c)
{
	return (_putchar(c));
}

/**
 * print_string - prints a string.
 *
 * @str: pointer.
 *
 * Return: the number of character printed.
 */

int print_string(char *str)
{
	int i = 0;

	if (!str)
		str = "(null)";

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}

/**
 * print_int - prints an  integer o integers.
 *
 * @num: variable.
 *
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
