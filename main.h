#ifndef main_h
#define main_h

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h> /* added more libraries in order for most of the prototype functions can work */
#include <string.h>
#include <stdlib.h>
#include <limits.h>

/*
 * operation_and_function - structure for selecting the correct print.
 *
 * @oper: the format specifier.
 *
 * @format: pointer to the function that handles the specific format.
 */

typedef struct operation_and_function
{
char *oper;
int (*funct)();
} papnir_t; /* here are the struct with its nickname, its in the header file so that it can be called in all the files if needed*/

/*
 * _printf - custom printf function
 * @format: the formta string containing the specifiers
 *
 * Return: the numbers of characters printed
 */
int _printf(const char *format, ...);
int _putchar(char c);
/* here we should keep adding all the prototype functions we create from the functions file */

#endif : w
