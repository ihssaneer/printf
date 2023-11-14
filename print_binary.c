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
	int len = 0, i;
	char c;
	char array[25];

	if (number == 0)
	{
		c = '0';
		len += write(1, &c, 1);
	}
	if (number > 0)
	{
		for (i = 0 ; i < 20 ; i++)
		{
			if (number / 2 != 0)
			{
				array[i] = (number % 2) + '0';
				number = number / 2;
			}
			if ((number / 2) == 0)
			{	
				array[i] = (number % 2) + '0';
				break;
			}
		
			len += write(1, array, i);
		}
	return (len);
}
``while (number / 2 != 0)
                {
                        c = (number % 2) + '0';
                        len += write(1, &c, 1);
                        number = number / 2;
                }
                if (number / 2 == 0)
                {
                        c = (number % 2) + '0';
                        len += write(1, &c, 1);
                }
        }
-- INSERT --               ``
