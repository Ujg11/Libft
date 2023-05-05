//#include "libft.h"
#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    int i;

    i = 0;
    while (i < n)
    {
        *(char*)(dest + i) = *(char*)(src + i);
        i++;
    }
    return (dest);
}

int main(void)
{
    char src[] = "Hola mundo";
    char dest[20];

    ft_memcpy(dest, src + 1, 2);

    printf("La cadena copiada es: %s\n", dest);

    return 0;
}