#include"main.h"
#include<unistd.h>

/**
 * print_char - print character 
 * @args: argument
 * Return: number of character 1
 */

int print_char( va_list args)
{
	char s;
	va_star(args, s)

	s = va_arg(args, int);
	_putchar(s);
	va_end(args)
	return (1);
	
}
	
