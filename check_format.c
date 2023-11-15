#include "main.h"

/**
 * check_format - Parses and processes a
 * formatted string with variable arguments.
 * @format: A va_list of variable arguments to be formatted.
 * @args: A va_list of variable arguments to be formatted.
 * Return: The total length of the formatted output.
 */
int check_format(const char *format, va_list args)
{
	int lenth = 0;
	char C;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			C = *format;
			lenth += get_specifier(args, C);
		}
		else
			lenth += write(1, format, 1);
		format++;
	}
	return (lenth);
}
/*khanjij & ihssaneer*/
