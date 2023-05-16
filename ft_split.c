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

int cont_words(char *s, char c)
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

char	**ft_split(char const *s, char c)
{
	
}

