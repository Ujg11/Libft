#include "libft.h"
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    while (i > 0)
    {
        if (s[i] == c)
            return ((char*)s + i);
        i--;
    }
    return (NULL);
}
/*
int main() {
    char str[] = "Homa, mundo!";
    char *ptr = ft_strrchr(str, 'm');
    
    if (ptr != NULL) {
        printf("El caracter 'm' fue encontrado en la posicion %ld de la cadena: %s\n", ptr - str, str);
    } else {
        printf("El caracter 'm' no fue encontrado en la cadena: %s\n", str);
    }
    return 0;
}*/
