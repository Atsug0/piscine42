/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 23:35:22 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/26 23:40:05 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft.h"

char	*ft_search(t_ch *begin_list, t_int value)
{
	t_ch	*temp;

	temp = begin_list;
	while (temp->next)
	{
		if (temp->value == value)
			return (temp->line);
		temp = temp->next;
	}
	if (temp->value == value)
		return (temp->line);
	return (NULL);
}
