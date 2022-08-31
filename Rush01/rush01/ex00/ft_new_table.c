/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_table.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oprosvir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 14:43:13 by oprosvir          #+#    #+#             */
/*   Updated: 2022/08/21 00:58:35 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

void	ft_init_boarders(int **tab, char *str)
{
	int	s;
	int	t;

	s = 0;
	t = 1;
	while (s < 31)
	{
		if (s < 7)
			tab[0][t] = str[s] - '0';
		else if (s < 15)
			tab[5][t] = str[s] - '0';
		else if (s < 23)
			tab[t][0] = str[s] - '0';
		else if (s < 31)
			tab[t][5] = str[s] - '0';
		t++;
		if (t % 5 == 0)
			t = 1;
		s += 2;
	}
}

int	**ft_init(char *argv)
{
	int		i;
	int		**tab;

	tab = malloc(sizeof(int *) * 6);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < 6)
	{
		tab[i] = malloc(6 * sizeof(int));
		if (!tab[i])
			return (NULL);
		i++;
	}
	ft_init_boarders(tab, argv);
	return (tab);
}
