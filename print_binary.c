#include"main.h"

/**
 * print_binary - print binary of numer
 * @args: argument
 * Return: binary
 */

int print_binary(va_list args)
{
	return (calculat_binary(va_arg(args, unsigned int)));
}
/**
 * calculat_binary - Prints an unsigned integer in binary to stdout
 * @n: The unsigned integer to print in binary
 *
 * Return: Number of characters printed (excluding null byte)
 */
int calculat_binary(unsigned int n)
{
	unsigned int count = 0;
	char C;

	if (n / 2 != 0)
		count += calculat_binary(n / 2);
	C = n % 2 + '0';
	count += write(1, &C, 1);
	return (count);
}
