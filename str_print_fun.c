#include "main.h"

/**
 * print_char - kkkkk
 * @args: ghhhhh
 * Return: jjjjj
 */
int print_char(va_list args)
{
	char ch;

	ch = va_arg(args, int);
	return (write(1, &ch, 1));
}

/**
 * print_K - kkkkk
 * @args: ghhhhh
 * Return: jjjjj
 */
int print_K(va_list args)
{
	(void)args;

	return (write(1, "%K", 2));
}

/**
 * print_ex - kkkkk
 * @args: ghhhhh
 * Return: jjjjj
 */
int print_ex(va_list args)
{
	(void)args;

	return (write(1, "%!", 2));
}

/**
 * print_per - kkkkk
 * @args: ghhhhh
 * Return: jjjjj
 */
int print_per(va_list args)
{
	(void)args;

	return (write(1, "%", 1));
}

/**
 * print_string - kkkkk
 * @args: ghhhhh
 * Return: jjjjj
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
