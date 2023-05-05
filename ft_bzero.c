//#include "libft.h"
#include <stdio.h>
#include <strings.h>

void ft_bzero(void *s, size_t n)
{
    int i;

    i = 0;
    while (i < n)
    {
        *((unsigned char*)s + i) = 0;
        i++;
    }
}

int main(void)
{
    char str[100] = "Hola que tal estas, com va totghgjhzwaxescrvtf";

    printf("\nAbans: %s\n", str);
    ft_bzero(str + 13, 4);
    printf("Despres:  %s\n", str);
    return 0;
}