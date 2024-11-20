// ex02

#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int avalue;

    avalue = *a;
    *a = *b;
    *b = avalue;
}

int main()
{
    int a = 1;
    int b = 2;

    ft_swap(&a, &b);
    printf("Valores intercambiados: a = %i, b = %i", a, b);
    return 0;
}
