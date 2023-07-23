#include "helpers.h"
#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _print_hex - Print an unsigned integer in hexadecimal format
 * @n: The unsigned integer to be printed
 * @uppercase: Set to 1 to print uppercase hex letters, 0 for lowercase
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
