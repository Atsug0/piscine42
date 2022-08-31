/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_can_place.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 18:51:04 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/21 00:40:38 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fonction.h"

int	check_line(int **tab, int i, int number)
{
	while (i % 4 != 0)
	{
		i--;
		if (tab[i / 4 + 1][i % 4 + 1] == number)
			return (0);
	}
	return (1);
}

int	check_columns(int **tab, int i, int number)
{
	while (i / 4 != 0)
	{
		i -= 4;
		if (tab[i / 4 + 1][i % 4 + 1] == number)
			return (0);
	}
	return (1);
}

int	ft_can_place(int **tab, int i, int num)
{
	if (!check_line(tab, i, num) || !check_columns(tab, i, num))
		return (0);
	return (1);
}
