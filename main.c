#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int l1;
    l1 = _printf("%b\n", 98);
    printf("\n");
    /*
    l2 = printf("%b\n", 98);
    */
    printf("l1: %d\n", l1);
    return (0);
}
