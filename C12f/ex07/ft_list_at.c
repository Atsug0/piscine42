/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 10:39:30 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/26 10:44:20 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*temp;

	i = 0;
	temp = begin_list;
	while (temp && i < nbr)
	{
		temp = temp->next;
		i++;
	}
	if (i == nbr && temp)
		return (temp);
	return (NULL);
}
