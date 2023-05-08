#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t src_len;
    size_t dst_len;

    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);
    i = 0;
    j = dst_len;
    while (j < size - 1 && src[i])
    {
        dst[j] = src[i];
        i++;
        j++;
    }
    dst[j] = '\0';
    return (src_len + dst_len);
}

int main (void)
{
    char src[] = "Hola que tal va, ";
    char dst[50] = "tot be?";
    size_t llargada;

    llargada = ft_strlcat(src, dst, 30);
    printf("Cadena de origen: %s\nCadena de destino: %s\n", src, dst);
    printf("Llargada %d\n\n", llargada);
    return (0);
}
