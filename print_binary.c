#include"main.h"

/**
 * print_binary - print binary of numer
 * @args: argument
 * Return: binary
 */

int print_binary(va_list args)
{
	unsigned int number = va_arg(args, unsigned int);
	int len = 0, i = 0;
	char c, array[20];

	if (number == 0)
	{
		c = '0';
		len += write(1, &c, 1);
	}
	if (number > 0)
	{
		while ((number / 2) != 0)
		{
			array[i] = (number % 2) + '0';
			number = number / 2;
			i++;
		}
		if (number / 2 == 0)
			array[i] = (number % 2) + '0';
		i++;
		array[i] = '\0';
		for (; i >= 0; i--)
		{
			c = array[i];
			len += write(1, &c, 1);
		}
	}
	return (len);
}
