//#include "libft.h"
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

int main(void)
{
    int res;
    char str[] = "Hola";

    res = ft_strlen(str);
    printf("%d\n", res);
    return (0);
}