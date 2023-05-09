#include "libft.h"
#include <stdio.h>

char *ft_strchr(const char *str, int c)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return ((char*)str + i);
        i++;
    }
    return (NULL);
}
/*
int main() {
    char str[] = "Hola, mundo!";
    char *ptr = ft_strchr(str, 'm');
    
    if (ptr != NULL) {
        printf("El caracter 'm' fue encontrado en la posicion %ld de la cadena: %s\n", ptr - str, str);
    } else {
        printf("El caracter 'm' no fue encontrado en la cadena: %s\n", str);
    }
    return 0;
}*/