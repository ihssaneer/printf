#include "main.h"

/**
 * get_specifier - jjjj
 * @args: ggggggg
 * @spf: hhhhh
 * Return: kkk
 */
int get_specifier(va_list args, char spf)
{
	unsigned int i = 0;
	int lenth = 0;
	specifier_t specifier[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_per},
		{'K', print_K},
		{'!', print_ex},
		{'i', print_int},
		{'d', print_int},
		{'\0', NULL}};

	while (specifier[i].sp != '\0')
	{
		if (spf == specifier[i].sp)
		{
			lenth = specifier[i].f(args);
			break;
		}
		i++;
	}
	return (lenth);
}
