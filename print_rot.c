#include"main.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using ROT13
 * @str: The input string
 *
 * Return: Pointer to the resulting string
 */
char *rot13(char *str)
{
char *ptr = str;
int i;
char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

while (*str)
{
for (i = 0; i <= 52; i++)
{
	if (*str == rot13[i])
	{
		*str = ROT13[i];
		break;
	}
}
str++;
}
return (ptr);
}
/**
 *
