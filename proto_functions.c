#include <stdarg.h>
#include <unistd.h>

/**
 *print_char - custom function to print characters with a format
 *@c: charcter to print
 *Return: the number of characters printed
 */

char print_char()

int _putchar(char c)
	{
	return (c);
}
/**
 *print_strings - prints a string
 *@format: finds a pattern to a format
 *Return: the result of the number
 */
char print_strings(char )
{
	int number = 0;
	const char *ptr = format;
	char ch;

	

	while ((ch = *ptr++) != '\0')
	{
		if (ch == '%' && *ptr == 's')
		{
			

			while (*str)
			{
				putchar(*str++);
				number++;
			}
			ptr++;
		}
		else
		{
			putchar(ch);
			number++;
		}
	}
	return (number);
}
