/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 10:32:03 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/26 10:38:55 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	if (!begin_list)
		return ;
	ft_list_clear(begin_list->next, free_fct);
	if (free_fct)
		free_fct(begin_list->data);
	free(begin_list);
}
