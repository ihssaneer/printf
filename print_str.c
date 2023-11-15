#include "main.h"
/**
 * print_char - Print a character to the standard output.
 * @args: A variable argument list.
 * Return: 1 on success -1 on failure.
 */
int print_char(va_list args)
{
	char ch;

	ch = va_arg(args, int);
	return (write(1, &ch, 1));
}

/**
 * print_K - prints K.
 * @args: A variable argument list.
 * Return: return 2 on success and 0 on failure.
 */
int print_K(va_list args)
{
	(void)args;

	return (write(1, "%K", 2));
}

/**
 * print_ex - prints !.
 * @args: A variable argument list.
 * Return: return 2 on success and 0 on failure.
 */
int print_ex(va_list args)
{
	(void)args;

	return (write(1, "%!", 2));
}

/**
 * print_per - print %.
 * @args: A variable argument list.
 * Return: return 1 on success and 0 on failure.
 */
int print_per(va_list args)
{
	(void)args;

	return (write(1, "%", 1));
}

/**
 * print_string - print a string to stdout.
 * @args: A variable argument list contining a sting.
 * Return: the lenth of the printed string.
 */
int print_string(va_list args)
{
	int lenth = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		lenth += _putchar(*str);
		str++;
	}
	return (lenth);
}
/*khanjij & ihssaneer*/
