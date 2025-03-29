#include "main.h"

/**
* print_char - prints a single character
* @c: variable
* Return: the character to print
*/
int print_char(char c)
{
    return (_putchar(c));
}

/**
* print_string - prints a string
* @str: pointer
* Return: the number of character printed
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
