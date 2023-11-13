#include "main.h"

/**
 * _printf - Custom printf function.
 * @format: Format string.
 * Return: jdhsfj
 */
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int lenth = 0;

	if (format == NULL || (*format == '%' && *(format + 1) == '\0'))
		return (-1);
	va_start(args, format);
	lenth = check_format(format, args);
	va_end(args);
	return (lenth);
}
