#include "main.h"
/**
 * handle_hex_lower - Prints an unsigned integer in lowercase hexadecimal.
 * @args: a va_list containing the arguments to be formatted.
 * Return: Number of characters printed.
 */
int handle_hex_lower(va_list args)
{
	return (print_hex_lower(va_arg(args, unsigned int)));
}

/**
 * handle_hex_upper - Prints an integer in uppercase hexadecimal.
 * @args: a va_list containing the arguments to be formatted.
 * Return: Number of characters printed.
 */
int handle_hex_upper(va_list args)
{
	return (print_hex_upper(va_arg(args, unsigned int)));
}
/**
 * print_hex_lower - Prints an unsigned integer in lowercase hexadecimal.
 * @num: The unsigned integer to print in hexadecimal.
 * Return: the lenth of num.
 */
int print_hex_lower(unsigned int num)
{
	int lenth = 0;

	if (num / 16 != 0)
		lenth += print_hex_lower(num / 16);
	if (num % 16 < 10)
		lenth += _putchar(num % 16 + '0');
	else
		lenth += _putchar(num % 16 - 10 + 'a');
	return (lenth);
}
/**
 * print_hex_upper - Prints an unsigned integer in uppercase hexadecimal.
 * @num: The unsigned integer to print in hexadecimal.
 * Return: the lenth of num.
 */
int print_hex_upper(unsigned int num)
{
	int lenth = 0;

	if (num / 16 != 0)
		lenth += print_hex_upper(num / 16);
	if (num % 16 < 10)
		lenth += _putchar(num % 16 + '0');
	else
		lenth += _putchar(num % 16 - 10 + 'A');
	return (lenth);
}
