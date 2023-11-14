#include"main.h"

/**
 * print_octal - print octal of numer
 * @args: argument
 * Return: octal
 */

int print_octal(va_list args)
{
	return (calculat_octal(va_arg(args, unsigned int)));
}
/**
 * calculat_binary - Prints an unsigned integer in binary to stdout
 * @n: The unsigned integer to print in binary
 *
 * Return: Number of characters printed (excluding null byte)
 */
int calculat_octal(unsigned int n)
{
	unsigned int count = 0;
	char C;

	if (n / 8 != 0)
		count += calculat_octal(n / 8);
	C = n % 8 + '0';
	count += write(1, &C, 1);
	return (count);
}
