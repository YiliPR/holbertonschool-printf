#include "main.h"

/**
 * print_binary - prints a binary number.
 *
 * @n: variable.
 *
 * Return: the amount of the binary number.
 */

int print_binary(unsigned int n)
{
	int count = 0;
	char buffer[32];
	int i = 0;

	if (n == 0)
		return (_putchar('0'));

	while (n > 0)
	{
		buffer[i++] = (n % 2) + '0';
		n /= 2;
	}

	while (i--)
		count += _putchar(buffer[i]);

	return (count);
}
