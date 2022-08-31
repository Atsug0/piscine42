/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oprosvir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 18:20:21 by oprosvir          #+#    #+#             */
/*   Updated: 2022/08/21 00:42:32 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fonction.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int **tab)
{
	int	index;

	index = 0;
	while (index < 16)
	{
		ft_putchar(tab[index / 4 + 1][index % 4 + 1] + '0');
		if ((index + 1) % 4 == 0)
			ft_putchar('\n');
		else
			ft_putchar(' ');
		index++;
	}
}
