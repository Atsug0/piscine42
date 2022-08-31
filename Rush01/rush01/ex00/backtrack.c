/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 18:17:16 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/21 00:35:15 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fonction.h"

int	ft_resolve(int **tab, int i)
{
	int	number;

	if (i == 16 && ft_complete(tab))
		return (1);
	if (i < 16)
	{
		number = 1;
		while (number < 5)
		{
			if (ft_can_place(tab, i, number))
			{
				tab[i / 4 + 1][i % 4 + 1] = number;
				if (ft_resolve(tab, i + 1))
					return (1);
			}
			number++;
		}
	}
	return (0);
}
