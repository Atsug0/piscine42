/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:49:44 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/28 19:53:47 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*temp;
	void	*tdata;

	temp = *begin_list;
	if (!temp)
		return ;
	while (temp->next)
	{
		if (cmp(temp->data, temp->next->data) > 0)
		{
			tdata = temp->data;
			temp->data = temp->next->data;
			temp->next->data = tdata;
			temp = *begin_list;
		}
		else
			temp = temp->next;
	}
}
