/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:36:34 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/26 11:42:53 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*temp;

	if (!begin_list || !f)
		return ;
	temp = begin_list;
	while (temp->next)
	{
		f(temp->data);
		temp = temp->next;
	}
	f(temp->data);
}
