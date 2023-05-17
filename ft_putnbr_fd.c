/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojimenez <ojimenez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:33:15 by ojimenez          #+#    #+#             */
/*   Updated: 2023/05/17 18:33:15 by ojimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	*str;
	size_t	len;

	str = ft_itoa(n);
	len = ft_strlen(str);
	write(fd, str, len);
}