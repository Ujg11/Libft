//#include "libft.h"
#include <stdio.h>

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (1);
    else
        return (0);
}

int main(void)
{
    int res;

    res = ft_isprint(56);
    printf("Resultat = %d\n", res);
    return (0);
}