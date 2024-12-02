#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(char c);
int print_string(char *str);
int print_int(int num);
int print_binary(unsigned int n);

#endif /* MAIN_H */
