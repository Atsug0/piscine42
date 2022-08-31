/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:32:30 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/25 18:38:09 by hmoulard         ###   ########.fr       */
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
