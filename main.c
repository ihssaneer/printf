#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int u, i;

    u = _printf("[d : i] - [%d : %i]\n", -1234567890, -1234567890);
    i = printf("[d : i] - [%d : %i]\n", -1234567890, -1234567890);
    printf(" :[%d : %i]\n", u, i);
    return (0);
}