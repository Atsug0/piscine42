/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 21:56:56 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/16 11:41:50 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_inbase(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_print_convert(unsigned int n, char *base, unsigned int size)
{
	if (n > size - 1)
	{
		ft_print_convert(n / size, base, size);
		n %= size;
	}
	ft_putchar(base[n]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	size;
	unsigned int	n;

	size = 0;
	if (ft_inbase('+', base) || ft_inbase('-', base))
		return ;
	while (base[size])
	{
		if (ft_inbase(base[size], base + size + 1))
			return ;
		size++;
	}
	if (size < 2)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		n = -nbr;
	}
	else
		n = nbr;
	ft_print_convert(n, base, size);
}
