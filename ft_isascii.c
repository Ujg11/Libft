//#include "libft.h"
#include <stdio.h>

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    else
        return (0);
}

int main(void)
{
    int res;

    res = ft_isascii('r');
    printf("Resultat = %d\n", res);
    return (0);
}
