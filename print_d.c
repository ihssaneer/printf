#include"main.h"
#include<stdio.h>

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
unsigned int num = n;
if (n < 0)
{
_putchar('-');
 i++;
num = -n;
}
if (num / 10 != 0)
{
print_number(num / 10);
}
_putchar((num % 10) + '0');
i++;
}

/**
 * print_int - print integer in d conversion
 * @args: argument
 * Return: length
 */

int print_int (va_list args)
{	
	n = va_arg(args, int);

print_number(n);
  return (i);
}

/**
 * print_d - print integer in d conversion
 * @args: argument
 * Return: length
 */

int print_d (va_list args)
{
        int n;
        int num;

        n = va_arg(args, int);

if (n < 0)
        _putchar('-');
i++;
num = - n;

else num = n;

while (num / 10 != 0)
{
print_number(n1 / 10);
}
_putchar((n1 % 10) + '0');
 i++;
  return (i);
}
