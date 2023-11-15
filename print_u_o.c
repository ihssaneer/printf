#include "main.h"
/**
 * print_unsigned_int - Prints an unsigned integer to stdout
 * @args: a va_list containing the arguments to be formatted.
 * Return: Number of characters printed.
 */
int print_unsigned_int(va_list args)
{
	return (print_positive_num(va_arg(args, unsigned int)));
}
/**
 * print_octal - Prints an unsigned integer in octal.
 * @args: a va_list containing the arguments to be formatted.
 * Return: Number of characters printed.
 */
int print_octal(va_list args)
{
	return (calculat_octal(va_arg(args, unsigned int)));
}
/**
 * calculat_octal - calculat an unsigned integer in octal.
 * @num: the unsigned integer to calculate on octal.
 * Return: the lenth of num.
 */
int calculat_octal(unsigned int num)
{
	int lenth = 0;

	if (num / 8 != 0)
		lenth += calculat_octal(num / 8);

	lenth += _putchar(num % 8 + '0');

	return (lenth);
}
