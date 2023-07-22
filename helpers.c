#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - Write a character to stdout
 * @c: The character to be written
 *
 * Return: 1 on success, -1 on failure
 */
int _putchar(char c)
{
        return write(1, &c, 1);
}

/**
 * _print_string - Print a string
 * @str: The string to be printed
 *
 * Return: The number of characters printed
 */
int _print_string(char *str)
{
        int printed_chars = 0;

        if (str == NULL)
        return (0);
        while (*str)
        {
        printed_chars += _putchar(*str);
        str++;
        }
        return (printed_chars);
}

/**
 * _print_int - Print an integer
 * @n: The integer to be printed
 *
 * Return: The number of characters printed
 */
int _print_int(int n)
{
        int printed_chars = 0;

        if (n < 0)
        {
        printed_chars += _putchar('-');
        n = -n;
        }
        if (n / 10)
        printed_chars += _print_int(n / 10);
        printed_chars += _putchar((n % 10) + '0');
        return (printed_chars);
}

/**
 * _print_unsigned - Print an unsigned integer
 * @n: The unsigned integer to be printed
 *
 * Return: The number of characters printed
 */
int _print_unsigned(unsigned int n)
{
        int printed_chars = 0;

        if (n / 10)
        printed_chars += _print_unsigned(n / 10);
        printed_chars += _putchar((n % 10) + '0');
        return (printed_chars);
}

/**
 * _print_octal - Print an unsigned integer in octal format
 * @n: The unsigned integer to be printed
 *
 * Return: The number of characters printed
 */
int _print_octal(unsigned int n)
{
        int printed_chars = 0;

        if (n / 8)
        printed_chars += _print_octal(n / 8);
        printed_chars += _putchar((n % 8) + '0');
        return (printed_chars);
}

/**
 * _print_hex - Print an unsigned integer in hexadecimal format
 * @n: The unsigned integer to be printed
 * @uppercase: Set to 1 to print uppercase hex letters, 0 for lowercase
 *
 * Return: The number of characters printed
 */
int _print_hex(unsigned int n, int uppercase)
{
        int printed_chars = 0;
        const char *hex_letters = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";

        if (n / 16)
        printed_chars += _print_hex(n / 16, uppercase);
        printed_chars += _putchar(hex_letters[n % 16]);
        return (printed_chars);
}
