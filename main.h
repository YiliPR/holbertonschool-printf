#ifndef main_h
#define main_h

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

/*
 * _printf - custom printf function
 * @format: the formta string containing the specifiers
 *
 * Return: the numbers of characters printed
 */
int _printf(const char *format, ...);

#endif:w
