#include "libft.h"
#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    int len_max;

    i = 0;
    len_max = src - dest - 1;
    if (dest > src)
    {
        while (i < n)
        {
            *((char *)dest + i) = *((char *)src + i);
            i++;
        }
    }
    else
    {
        while (i < n && i < len_max)
        {
            *((char *)dest + i) = *((char *)src + i);
            i++;
        }
    }
    return (dest);
}
/*
int main(void)
{
    char str1[] = "Hola que tal";
    char str2[] = "Com va la vida";
    size_t n = strlen(str2) + 1;

    printf("Abans memmove:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    ft_memmove(str1, str2, n);
    
    printf("\nDespres memmove:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    return (0);
}*/
