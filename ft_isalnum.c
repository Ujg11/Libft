//#include "libft.h"
#include <stdio.h>

int ft_isalnum(int c)
{
    if((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return (1);
    else
        return (0);
}

int main(void)
{
    int res;

    res = ft_isalnum('?');
    printf("Resultat = %d\n", res);
    return (0);
}
