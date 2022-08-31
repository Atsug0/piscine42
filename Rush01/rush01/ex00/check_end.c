/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_end.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 23:31:05 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/21 00:38:08 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fonction.h"

int	check_haut(int **tab, int columns)
{
	int		max;
	int		j;
	int		num;

	j = 1;
	num = tab[0][columns];
	max = 0;
	while (j < 5)
	{
		if (tab[j][columns] > max)
		{
			max = tab[j][columns];
			num--;
		}
		j++;
	}
	if (num != 0)
		return (0);
	return (1);
}

int	check_bas(int **tab, int columns)
{
	int		max;
	int		j;
	int		num;

	j = 4;
	num = tab[5][columns];
	max = 0;
	while (j > 0)
	{
		if (tab[j][columns] > max)
		{
			max = tab[j][columns];
			num--;
		}
		j--;
	}
	if (num != 0)
		return (0);
	return (1);
}

int	check_gauche(int **tab, int ligne)
{
	int		max;
	int		j;
	int		num;

	j = 1;
	num = tab[ligne][0];
	max = 0;
	while (j < 5)
	{
		if (tab[ligne][j] > max)
		{
			max = tab[ligne][j];
			num--;
		}
		j++;
	}
	if (num != 0)
		return (0);
	return (1);
}

int	check_droit(int **tab, int ligne)
{
	int		max;
	int		j;
	int		num;

	j = 4;
	num = tab[ligne][5];
	max = 0;
	while (j > 0)
	{
		if (tab[ligne][j] > max)
		{
			max = tab[ligne][j];
			num--;
		}
		j--;
	}
	if (num != 0)
		return (0);
	return (1);
}

int	ft_complete(int **tab)
{
	int		i;

	i = 1;
	while (i < 5)
	{
		if (!check_droit(tab, i))
			return (0);
		if (!check_gauche(tab, i))
			return (0);
		if (!check_haut(tab, i))
			return (0);
		if (!check_bas(tab, i))
			return (0);
		i++;
	}
	return (1);
}
