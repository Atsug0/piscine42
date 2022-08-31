/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_front.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 22:55:22 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/26 22:59:56 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft.h"

void	ft_push_front(t_ch **begin_list, t_int value, char *line)
{
	t_ch	*deb;

	deb = create_elem(value, line);
	if (deb)
	{
		if (*begin_list)
		{
			deb->next = *begin_list;
		}
		*begin_list = deb;
	}
}
