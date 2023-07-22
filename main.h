#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _print_string(char *str);
int _print_int(int n);
int _print_unsigned(unsigned int n);
int _print_octal(unsigned int n);
int _print_hex(unsigned int n, int uppercase);

#endif /* MAIN_H */
