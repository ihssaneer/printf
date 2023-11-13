#include "main.h"

/**
 * check_format - bbbbb
 * @format: jjjjjj
 * @va_liste: kkkkkkk
 * Return: intt
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
