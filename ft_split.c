/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojimenez <ojimenez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:27:51 by ojimenez          #+#    #+#             */
/*   Updated: 2023/05/19 16:32:41 by ojimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_free(char **split, int j)
{
	while (--j >= 0)
		free(split[j]);
	free(split);
	return (NULL);
}

static size_t	cont_words(char *s, char c)
{
	size_t	i;
	size_t	cont;

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
	size_t	k;
	size_t	con;
	size_t	j;

	i = 0;
	j = 0;
	k = 0;
	con = 0;
	while (s[i])
	{
		con = cont_letters(s, c, i);
		if (con > 0)
		{
			split[j] = (char *)malloc((con + 1) * sizeof(char));
			if (!split[j])
				return (ft_free(split, j));
			while (con--)
			{
				if (s[i] != c)
					split[j][k++] = s[i];
				i++;
			}
			split[j++][k] = '\0';
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
	int		pos;

	pos = 0;
	if (!s)
		return (NULL);
	str = (char *)s;
	cont = cont_words(str, c);
	split = malloc((cont + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	split = intro_words(split, str, c);
	if (!split)
		return (NULL);
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
