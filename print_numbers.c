#include "main.h"

/**
 * print_int - prints integers.
 * @args: a va_list containing the arguments to be formatted.
 * Return: the length of the formatted output.
 */
int print_int(va_list args)
{
	long int number = va_arg(args, int);
	int lenth = 0;

	if (number < 0)
	{
		lenth += _putchar('-');
		number *= -1;
	}
	lenth += print_positive_num(number);
	return (lenth);
}
/**
 * print_positive_num - Prints a positive integer to stdout
 * @num: The positive integer to print
 * Return: Number of characters printed, excluding null byte.
 */
int print_positive_num(unsigned int num)
{
	unsigned int num_tmp = num, i = 1;
	int lenth = 0;

	while (num_tmp / 10)
	{
		num_tmp /= 10;
		i *= 10;
	}
	for (; i >= 1; i /= 10)
	{
		num_tmp = num / i;
		num -= (i * num_tmp);
		lenth += _putchar(num_tmp + '0');
	}
	return (lenth);
}
/**
 * print_binary - print binary of number.
 * @args: a va_list containing the arguments to be formatted.
 * Return: the length of the formatted output.
 */

int print_binary(va_list args)
{
	return (calculat_binary(va_arg(args, unsigned int)));
}
/**
 * calculat_binary - calculat an unsigned integer in binary to stdout.
 * @n: The unsigned integer to calculat in binary
 * Return: the length of n.
 */
int calculat_binary(unsigned int n)
{
	unsigned int lenth = 0;

	if (n / 2 != 0)
		lenth += calculat_binary(n / 2);
	lenth += _putchar(n % 2 + '0');
	return (lenth);
}
/*khanjij & ihssaneer*/
