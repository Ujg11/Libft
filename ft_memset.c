//#include "libft.h"
#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
    int i;

    i = 0;
    while (i < n)
    {
        *((unsigned char*)s + i) = (unsigned char)c;
        i++;
    }
    return (s);
}

int main(void)
{
    char str[50] = "sdfghjklvxbzgz vcbbzj jbhh d j";
    printf("\nAbans: %s\n", str);
    ft_memset(str + 13, '.', 8*sizeof(char));
    printf("Despres:  %s", str);
    return 0;
}
