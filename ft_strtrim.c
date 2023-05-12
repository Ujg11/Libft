/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojimenez <ojimenez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 11:40:44 by ojimenez          #+#    #+#             */
/*   Updated: 2023/05/10 11:41:20 by ojimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	buscar_en_set(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	inici;
	size_t	final;
	size_t	i;
	char	*res;
	
	inici = 0;
	final = ft_strlen(s1) - 1;
	i = 0;
	while (s1[inici] && buscar_en_set(set, s1[inici]))
		inici++;
	while (final > inici && buscar_en_set(set, s1[final]))
		final--;
	res = (char *)malloc((final - inici + 1) * sizeof(char));
	if (!s1 || !res)
		return (NULL);
	while (inici < final)
	{
		res[i] = s1[inici];
		i++;
		inici++;
	}
	res[i] = '\0';
	return (res);
}
/*
int main(void)
{
	char const s1[] = "  Holaa  ";
	char const set[] = " ";
	char *res;

	res = ft_strtrim(s1, set);
	printf("Cadena original: %s\n", s1);
	printf("Cadena retallada: %s\n", res);
	return (0);
}*/