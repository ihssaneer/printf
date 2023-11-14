#include "main.h"

/**
 * print_char - function that print onre character
 * @args: argument to print
 * Return: the character printed
 */
int print_char(va_list args)
{
	char ch;

	ch = va_arg(args, int);
	return (write(1, &ch, 1));
}

/**
 * print_K - function that prints the special character
 * @args: argument to print
 * Return: the special character printed
 */
int print_K(va_list args)
{
	(void)args;

	return (write(1, "%K", 2));
}

/**
 * print_ex - function that prints the exclamation character
 * @args: argument to print
 * Return: the printed character
 */
int print_ex(va_list args)
{
	(void)args;

	return (write(1, "%!", 2));
}

/**
 * print_per - function that prints the specific character
 * @args: argument to print
 * Return: the printed specific character
 */
int print_per(va_list args)
{
	(void)args;

	return (write(1, "%", 1));
}

/**
 * print_string - function that prints string of character
 * @args: argument to print
 * Return: the length of the printed string character 
 */
int print_string(va_list args)
{
	char *str;
	int lenth = 0;

	str = va_arg(args, char *);
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	lenth = strlen(str);
	write(1, str, lenth);
	return (lenth);
}
