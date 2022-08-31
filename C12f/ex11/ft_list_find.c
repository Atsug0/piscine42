/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:34:54 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/28 19:38:08 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_list.h"
#include<stdlib.h>

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*temp;

	temp = begin_list;
	if (!temp)
		return (NULL);
	while (temp->next)
	{
		if (cmp(temp->data, data_ref) == 0)
			return (temp);
		temp = temp->next;
	}
	if (cmp(temp->data, data_ref) == 0)
		return (temp);
	return (NULL);
}
