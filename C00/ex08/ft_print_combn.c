/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:58:45 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/11 13:56:53 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int nb, int *tab, int pos)
{
	int	i;

	if (pos == 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	i = 0;
	while (i != nb)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
}

void	ft_recurs(int nb, int *tab)
{
	int	i;
	int	max;

	i = nb -1;
	max = 9;
	while (tab[i] == max)
	{
		i -= 1;
		max -= 1;
	}
	tab[i] += 1;
	while (i <= nb)
	{
		tab[i + 1] = tab[i] + 1;
		i += 1;
	}
}

void	ft_print_combn(int n)
{	
	int	tab[11];
	int	i;

	i = 0;
	if (n < 1 || n > 9)
		return ;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
	ft_print(n, tab, 0);
	while (tab[0] != 10 - n || tab[n - 1] != 9)
	{
		if (tab[n - 1] != 9)
			tab[n - 1] += 1;
		else
			ft_recurs(n, tab);
		ft_print(n, tab, 1);
	}
}
