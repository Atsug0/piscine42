/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:58:41 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/28 20:04:21 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*temp;

	if (!*begin_list || cmp(data, (*begin_list)->data) <= 0)
	{
		temp = ft_create_elem(data);
		if (!temp)
			return ;
		temp->next = *begin_list;
		*begin_list = temp;
	}
	else
		ft_sorted_list_insert(&(*begin_list)->next, data, cmp);
}
