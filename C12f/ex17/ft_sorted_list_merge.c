/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 20:05:12 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/29 00:13:01 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_list.h"

void	ft_sort_list(t_list **begin_list1, t_list *begin_list2, int (*cmp)())
{
	if (!*begin_list1 || cmp(begin_list2->data, (*begin_list1)->data) <= 0)
	{
		begin_list2->next = *begin_list1;
		*begin_list1 = begin_list2;
	}
	else
		ft_sort_list(&(*begin_list1)->next, begin_list2, cmp);
}

void	ft_sorted_list_merge(t_list **begin_list1, \
t_list *begin_list2, int (*cmp)())
{
	if (!begin_list2)
		return ;
	ft_sorted_list_merge(begin_list1, begin_list2->next, cmp);
	ft_sort_list(begin_list1, begin_list2, cmp);
}
