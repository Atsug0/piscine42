/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 22:08:32 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/10 22:28:31 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_get_number(int i1, int i2, int tab[])
{
	if (i1 >= 10)
	{
		tab[0] = i1 / 10;
		tab[1] = i1 - 10 * tab[0];
	}
	else
	{
		tab[0] = 0;
		tab[1] = i1;
	}
	if (i2 >= 10)
	{
		tab[2] = i2 / 10;
		tab[3] = i2 - 10 * tab[2];
	}
	else
	{
		tab[2] = 0;
		tab[3] = i2;
	}
}

void	ft_putchar_multiple(int i1, int i2)
{
	int	i[4];

	ft_get_number(i1, i2, i);
	ft_putchar(i[0] + 48);
	ft_putchar(i[1] + 48);
	ft_putchar(' ');
	ft_putchar(i[2] + 48);
	ft_putchar(i[3] + 48);
	if (i1 != 98 || i2 != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	i1;
	int	i2;

	i1 = 0;
	while (i1 <= 98)
	{
		i2 = i1 + 1;
		while (i2 <= 99)
		{
			ft_putchar_multiple(i1, i2);
			i2++;
		}
		i1++;
	}
}
