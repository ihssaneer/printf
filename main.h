#ifndef PRINTF_H
#define PRINTF_H

#define BUFFER_SIZE 1024

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/**
 * struct specifiers - a structer of specifiers
 * and functions which print it.
 * @sp: the specifier symbole.
 * @f: the function which print it.
 */
typedef struct specifiers
{
	char sp;
	int (*f)(va_list);
} specifier_t;

int _printf(const char *format, ...);
int check_format(const char *format, va_list ptr);
int get_specifier(va_list args, char spf);
int print_char(va_list args);
int print_K(va_list args);
int print_ex(va_list args);
int print_per(va_list args);
int print_string(va_list args);
int print_int(va_list args);
int print_binary(va_list args);
int calculat_binary(unsigned int n);
#endif /*PRINTF_H*/
