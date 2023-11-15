#include "main.h"

/**
 * get_specifier - Selects the appropriate function
 * for a given format specifier.
 * @args: a va_list containing the arguments to be formatted.
 * @spf: the format specifier character.
 * Return: the length of the formatted output.
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
		{'b', print_binary},
		{'u', print_unsigned_int},
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
/*khanjij & ihssaneer*/
