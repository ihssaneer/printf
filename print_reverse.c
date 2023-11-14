#include"main.h"
#include<stdio.h>

/**
 * reverse_array - function reverse array of integer
 *
 * @a: array of integer
 * @n: number of integer
 *
 * Return: result
 */

void reverse_array(int *a, int n)
{
	int temp, i, j;

for (i = 0, j = (n - 1); i < j; i++, j--)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
