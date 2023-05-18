/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojimenez <ojimenez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:27:51 by ojimenez          #+#    #+#             */
/*   Updated: 2023/05/16 16:02:20 by ojimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len_str(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while(n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*res_str_pos(char *str, int n, size_t len)
{
	size_t	i;
	int		num;

	i = 0;
	num = 0;
	str[len] = '\0';
	len--;
	while (len > 0)
	{
		num = n % 10;
		n = n / 10;
		str[len] = (num + '0');
		len--;
	}
	str[0] = (n + '0');
	return (str);
}

static char	*res_str_neg(char *str, int n, size_t len)
{
	size_t	i;
	int		num;

	i = 0;
	num = 0;
	str[len + 1] = '\0';
	while (len > 0)
	{
		num = n % 10;
		n = n / 10;
		str[len] = (num + '0');
		len--;
	}
	str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	int		neg;

	if (n == -2147483648)
		return ("-2147483648");
	if (n == 0)
		return ("0");
	neg = 0;
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	len = len_str(n);
	str = (char *)malloc((len + neg + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (neg == 0)
		str = res_str_pos(str, n, len);
	else 
		str = res_str_neg(str, n, len);
	return (str);
}
/*
int main(void)
{
	int n = -5671657;
	char *str = ft_itoa(n);
	printf("Resultat = %s", str);
	return (0);
}*/