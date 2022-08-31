/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:50:41 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/26 10:30:33 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*deb;

	deb = ft_create_elem(data);
	if (deb)
	{
		if (*begin_list)
			deb->next = *begin_list;
		*begin_list = deb;
	}
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*l;
	int		i;

	i = 0;
	if (size)
	{
		l = ft_create_elem(strs[i++]);
		if (!l)
			return (NULL);
	}
	else
		return (NULL);
	while (i < size)
		ft_list_push_front(&l, strs[i++]);
	return (l);
}
