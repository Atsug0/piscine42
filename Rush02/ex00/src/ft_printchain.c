/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchain.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 22:23:18 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/27 13:24:45 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft.h"

void	ft_printchain(t_ch *chain)
{
	t_ch	*temp;

	temp = chain;
	while (temp->next)
	{
		ft_putstr(temp->line);
		ft_putstr(" ");
		temp = temp->next;
	}
	ft_putstr(temp->line);
	ft_putstr("\n");
}
