/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:46:34 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/28 19:49:14 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*temp;

	if (!*begin_list1)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	temp = *begin_list1;
	while (temp->next)
		temp = temp->next;
	temp->next = begin_list2;
}
