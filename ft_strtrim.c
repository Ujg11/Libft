/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojimenez <ojimenez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 11:40:44 by ojimenez          #+#    #+#             */
/*   Updated: 2023/05/16 15:21:11 by ojimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s1) + 1;
	copy = (char *)malloc(len * sizeof(char));
	if (!copy)
		return (NULL);
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	fin;

	fin = 0;
	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	while (s[fin])
		fin++;
	if ((size_t)s + fin < len)
		len = (size_t)s + fin;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	while (s[start + i] && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*s;

	i = 0;
	s = (char *)str;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&str[i]);
	return (NULL);
}
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	ini;
	size_t	end;
	char	*res;

	ini = 0;
	end = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[ini] && ft_strchr(set, s1[ini]))
		ini++;
	while (end > ini && ft_strchr(set, s1[end - 1]))
		end--;
	res = ft_substr(s1, ini, end - ini);
	if (!res)
		return (NULL);
	return (res);
}

/*
int main(void)
{
	char const s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
	char const set[] = "lt";
	char *res;

	res = ft_strtrim(s1, set);
	printf("Cadena original: %s\n", s1);
	printf("Cadena retallada: %s\n", res);
	return (0);
}*/
