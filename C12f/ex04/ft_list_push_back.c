/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:49:49 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/25 19:16:43 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_find_end(t_list *begin)
{
	t_list	*temp;

	temp = begin;
	while (temp->next)
		temp = temp->next;
	return (temp);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*temp;
	t_list	*elem;

	elem = ft_create_elem(data);
	if (!*begin_list)
		*begin_list = elem;
	else
	{
		temp = ft_find_end(*begin_list);
		temp->next = elem;
	}	
}
