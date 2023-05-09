#include "libft.h"
#include <stdio.h>

int ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
    size_t i;
    unsigned char *s1;
    unsigned char *s2;

    i = 0;
    s1 = (unsigned char *)ptr1;
    s2 = (unsigned char *)ptr2;
    while (s1[i] && s2[i] && i < num - 1)
    {
        if (s1[i] != s2[i])
            return ((int)s1[i] - (int)s2[i]);
        i++;
    }
    return (0);
}
/*
int main(void)
{
    char ptr1[] = "Holaafhgvjhb";
    char ptr2[] = "Holac";
    int res;

    res = ft_memcmp(ptr1, ptr2, 10);
    printf("Resultat = %d", res);
    return (0);
}*/
