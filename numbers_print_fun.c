#include "main.h"

/**
 * print_int - Function to print argument
 * @args: argument to print
 * Return: length of argument printed
 */
int print_int(va_list args)
{
	long int number = 0, num_tmp = 0, count = 1;
	int lenth = 0;
	char C;

	number = va_arg(args, int);
	if (number == 0)
	{
		C = '0';
		lenth += write(1, &C, 1);
	}
	if (number < 0)
	{
		C = '-';
		lenth += write(1, &C, 1);
		number *= -1;
	}
	if (number > 0)
	{
		num_tmp = number;
		while ((num_tmp / 10))
		{
			num_tmp /= 10;
			count *= 10;
		}
		for (; count >= 1; count /= 10)
		{
			num_tmp = number / count;
			number -= (count * num_tmp);
			C = num_tmp + '0';
			lenth += write(1, &C, 1);
		}
	}
	return (lenth);
}
