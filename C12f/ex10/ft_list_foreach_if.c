/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:49:59 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/28 19:34:21 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), \
void *data_ref, int (*cmp)())
{
	t_list	*temp;

	temp = begin_list;
	while (temp->next)
	{
		if (cmp(temp->data, data_ref) == 0)
			f(temp->data);
		temp = temp->next;
	}
	if (cmp(temp->data, data_ref) == 0)
		f(temp->data);
}
