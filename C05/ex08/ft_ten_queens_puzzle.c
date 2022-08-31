/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 11:22:58 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/22 11:59:23 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_chess(char *tab, int *index, int *max)
{
	*index = 0;
	while (*index < 10)
	{
		ft_putchar(tab[*index]);
		*index = *index + 1;
	}
	*max = *max + 1;
	ft_putchar('\n');
}

int	ft_verif(char *tab, int index, int pos)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (tab[i] == pos + '0')
			return (0);
		i++;
	}
	i = 0;
	while (i < index)
	{
		if (tab[i] == pos + index - i + '0')
			return (0);
		if (tab[i] == pos - index + i + '0')
			return (0);
		i++;
	}
	return (1);
}

void	ft_backtrack(char *tab, int index, int *max)
{
	if (index == 10)
	{
		ft_print_chess(tab, &index, &(*max));
		return ;
	}
	tab[index] = '0';
	while (tab[index] - '0' < 10)
	{
		if (ft_verif(tab, index, tab[index] - '0'))
			ft_backtrack(tab, index + 1, &(*max));
		tab[index]++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	tab[10];
	int		max;

	max = 0;
	ft_backtrack(tab, 0, &max);
	return (max);
}
