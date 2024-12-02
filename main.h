#ifndef main_h
#define main_h

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h> /* added more libraries in order for most of the prototype functions can work */
#include <string.h>
#include <stdlib.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(char c);
int handler(const char *str, va_list list);
int percent_handler(const char *str, va_list list, int *i);
int print_char(va_list args);
int print_string(va_list args);
int percent_handler(const char *str, va_list list, int *i);
int print_rev_string(va_list list);

#endif
