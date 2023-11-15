#include "main.h"
/**
 * print_unsigned_int - Prints an unsigned integer to stdout
 * @n: The unsigned integer to print
 *
 * Return: Number of characters printed (excluding null byte)
 */
int print_unsigned_int(va_list args)
{
	return (print_unsigned_helper(va_arg(args, unsigned int)));
}
/**
 * print_positive_number - Prints a positive integer to stdout
 * @n: The positive integer to print
 *
 * Return: Number of characters printed (excluding null byte)
 */
int print_unsigned_helper(unsigned int n)
{
	int lenth = 0;

	if (n / 10 != 0)
		lenth += print_unsigned_helper(n / 10);
	lenth += _putchar((n % 10) + '0');
	return (lenth);
}
