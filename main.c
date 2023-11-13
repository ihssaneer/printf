#include "main.h"
#include <stdio.h>

int main (void)
{
    int mohamed1, mohamed2;

    mohamed1 = _printf("Jihane, %% %K %!, %s", "ihssane");
    printf("\n");
    mohamed2 = printf("Jihane, %% %K %!, %s", "ihssane");
    printf("\n");
    printf("%d : %d\n", mohamed1, mohamed2);
return (0);
}