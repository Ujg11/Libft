/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojimenez <ojimenez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 19:49:53 by ojimenez          #+#    #+#             */
/*   Updated: 2023/05/11 19:52:47 by ojimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	char	*copia;
	size_t	len;
	size_t	i;

	i = 0;
	if (!s1)
		return (NULL);
	len = ft_strlen(s1) + 1;
	copia = (char *)malloc(len * sizeof(char));
	while (s1[i])
	{
		copia[i] = s1[i];
		i++;
	}
	copia[i] = '\0';
	return (copia);
}
/*Aqui al strlen li sumem +1 per tenir tb el '\0'
 Despres de fer el copiar a l'ultim copia[i] = '\0'

int main(void)
{
	const char *s1 = "Hola que tal";
	char *copia;

	copia = ft_strdup(s1);
	copia[0] = 'J';
	printf("Original: %s\n", s1);
	printf("Copia: %s\n", copia);
	free(copia);
	return (0);
}*/
