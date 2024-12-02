/* _printf - Custom printf Implementation */

Project Description:

The _printf function is a custom implementation of the standard printf function. This project aims to replicate the behavior of printf for a subset of format specifiers, including %c, %s, %d, %i, %%, and %b. It supports handling of variable arguments and formats, and it writes output to standard output using the write system call.

This implementation demonstrates the use of variadic functions in C, as well as basic string formatting and integer conversion techniques.

Supported Format Specifiers:

The following format specifiers are supported:

%c: Prints a single character.
%s: Prints a string (handles NULL as (null)).
%d: Prints an integer (base 10).
%i: Prints an integer (base 10).
%%: Prints a literal percent sign (%).
%b: Prints an unsigned integer in binary format.

Usage:

Here is how you can use the _printf function in your C code:

#include "main.h"

int main(void)
{
    _printf("Hello, %s!\n", "World");
    _printf("Character: %c\n", 'A');
    _printf("Integer: %d\n", 123);
    _printf("Binary of 5: %b\n", 5);
    _printf("Percent: %%\n");

    return 0;
}

Example Output:

Hello, World!
Character: A
Integer: 123
Binary of 5: 101
Percent: %

Functionality Breakdown:

_printf: Main function that processes the format string, identifies format specifiers, and calls the appropriate helper functions to handle them.
_putchar: Writes a single character to standard output.
print_char: Handles the %c specifier (prints a single character).
print_string: Handles the %s specifier (prints a string).
print_int: Handles both %d and %i specifiers (prints an integer).
print_binary: Handles the %b specifier (prints a number in binary format).

Known Issues:

The function does not handle edge cases such as invalid format specifiers or extremely large numbers for binary conversion.
This implementation does not support floating-point numbers or other advanced format specifiers that printf typically handles.


