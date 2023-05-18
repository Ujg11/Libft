/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojimenez <ojimenez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:44:05 by ojimenez          #+#    #+#             */
/*   Updated: 2023/05/18 13:44:05 by ojimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*l;
	t_list	*next;

	l = *lst;
	if (!lst || !*lst || !del)
	{
		return ;
	}
	while (l)
	{
		next = l->next;
		ft_lstdelone(l, del);
		l = next;
	}
}

