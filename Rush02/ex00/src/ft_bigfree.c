/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bigfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 22:09:07 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/27 15:48:47 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft.h"

void	ft_bigfree_dict(t_ch *begin_list)
{
	if (!begin_list)
		return ;
	ft_bigfree_dict(begin_list->next);
	free(begin_list->line);
	free(begin_list);
}

void	ft_bigfree_res(t_ch *begin_list)
{
	if (!begin_list)
		return ;
	ft_bigfree_res(begin_list->next);
	free(begin_list);
}

void	ft_bigfree2(char **splited_char)
{
	int	i;

	i = 0;
	while (splited_char[i])
	{
		free(splited_char[i]);
		i++;
	}
	free(splited_char);
}
