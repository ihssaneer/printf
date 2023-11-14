#include"main.h"
#include<stdio.h>
/**
 * print_binary - print binary of numer
 * @args: argument 
 * Return: binary 
 */

int print_binary(va_list args)
{
	unsigned int number = va_arg(args, unsigned int);
	int len;

	if (number == 0)
	{
		C = '0';
		len += write(1, &C, 1);
	}
	if (number > 0)
	{
		while (number / 2 != 0)
		{
			c = (number % 2) + '0';
			len += write(1, &C, 1);
			number = number / 2;
		}
		if (number / 2 = 0)
		{	
			c = (number % 2) + '0';
			len += write(1, &C, 1);
		}
	}
	return (len);
}
