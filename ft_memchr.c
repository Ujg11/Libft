#include "libft.h"
#include <stdio.h>

void *ft_memchr(const void *ptr, int value, size_t num)
{
    unsigned char *str;
    size_t i;

    i = 0;
    str = (unsigned char *)ptr;
    while (i < num && str[i])
    {
        if (str[i] == (unsigned char)value)
            return ((void *)(str + i));
        i++;
    }
    return (NULL);
}
/*
int main() {
    char str[] = "Hello, world!";
    char *ptr;
    
    ptr = (char*) ft_memchr(str, 'w', 13);
    if (ptr != NULL) {
        printf("El caracter 'w' fue encontrado en la posicion %ld de la cadena: %s\n", ptr - str, str);
    } else {
        printf("El caracter 'w' no se ha encontrado en la cadena: %s\n", str);
    }
    
    return 0;
}*/



