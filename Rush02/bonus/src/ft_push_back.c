/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 22:46:24 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/26 22:54:27 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft.h"

t_ch	*ft_find_end(t_ch *begin)
{
	t_ch	*temp;

	temp = begin;
	while (temp->next)
		temp = temp->next;
	return (temp);
}

void	ft_push_back(t_ch **begin_list, t_ch *elem)
{
	t_ch	*temp;

	if (!elem)
		return ;
	if (!*begin_list)
		*begin_list = elem;
	else
	{
		temp = ft_find_end(*begin_list);
		temp->next = elem;
	}
}
