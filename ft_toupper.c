//#include "libft.h"
#include <stdio.h>

int ft_toupper(int c)
{
    int majus;

    if (c >= 97 && c <= 122)
    {
        majus = c - 32;
        return (majus);
    }
    else
        return (c);
}
/*
int main (void)
{
    char c = 'a';
    char c_mayus = ft_toupper(c);
    printf("El caracter %c en majuscula es %c\n", c, c_mayus);
    return 0;
}*/
