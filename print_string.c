#include"main.h"
#include<stdio.h>

/**
 * print_string - print string of character
 * @args: argument to print
 * Return: the length of string character
 */
int print_string (va_list args)
{
	char* s;
	int i, len;

	va_start(args, *s)
	s = va_arg(args, char*)
	
		if(s == NULL)
		{
			s = "null";
			len = _strlen(s);
			for (i = 0; i < len; i++)
				_putchar(s[i]);
			return(len);
		}
		else
	{
		len = _strlen(s):
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
