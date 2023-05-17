/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojimenez <ojimenez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:27:51 by ojimenez          #+#    #+#             */
/*   Updated: 2023/05/16 16:02:20 by ojimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	cont_words(char *s, char c)
{
	size_t  i;
	size_t  cont;

	i = 0;
	cont = 0;
	if (s[0] != c)
		cont++;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			cont++;
		i++;
	}
	return (cont);
}

static char	**create_split(char *s, char c, int cont)
{
	char	**split;

	split = (char **)malloc((cont + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	return (split);
}

static size_t	cont_letters(char *s, char c, size_t pos)
{
	size_t	i;

	i = 0;
	while (s[pos] != c && s[pos])
	{
		i++;
		pos++;
	}
	return (i);
}

static char	**intro_words(char **split, char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	con;

	i = 0;
	j = 0;
	k = 0;
	con = 0;
	while (s[i])
	{
		con = cont_letters(s, c, i);
		split[j] = (char *)malloc((con + 1) * sizeof(char));
		if (!split[j])
		{
			while (j > 0)
				free(split[--j]);
			free(split);
			return (NULL);
		}
		if (con > 0)
		{
			while (con > 0)
			{
				if (s[i] != c)
					split[j][k++] = s[i];
				i++;
				con--;
			}
			split[j][k] = '\0';
			j++;
			k = 0;
		}
		else
			i++;
	}
	split[j] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	char	*str;
	size_t	cont;

	if (!s)
		return (NULL);
	str = (char *)s;
	cont = cont_words(str, c);
	split = create_split(str, c, cont);
	if (!split)
		return (NULL);
	split = intro_words(split, str, c);
	if (!split)
	{
		free(split);
		return (NULL);
	}
	return (split);
}
/*
int main(void)
{
    char s[] = "Hola,que,este,es,un,ejemplo";
    char c = ',';

    char **split = ft_split(s, c);
    if (split == NULL)
    {
        printf("NULL\n");
        return (0);
    }

    int i = 0;
    while (split[i] != NULL)
    {
        printf("%s\n", split[i]);
        i++;
    }
    if (split != NULL)
    {
        int i = 0;
        while (split[i] != NULL)
        {
            free(split[i]);
            i++;
        }
        free(split);
    }
    return 0;
}*/