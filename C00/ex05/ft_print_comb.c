/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 10:26:42 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/11 09:52:26 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_final(int a, int b, int c)
{	
	ft_putchar(a + 48);
	ft_putchar(b + 48);
	ft_putchar(c + 48);
	if (a != 7 || b != 8 || c != 9)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	centaine;
	int	dizaine;
	int	unite;

	centaine = 0;
	while (centaine < 8)
	{
		dizaine = centaine + 1;
		while (dizaine < 9)
		{
			unite = dizaine + 1;
			while (unite < 10)
			{
				print_final(centaine, dizaine, unite);
				unite++;
			}
			dizaine++;
		}
		centaine++;
	}
}
