/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:31:46 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/16 14:57:47 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

int	ft_in_base(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (i);
	return (-1);
}

int	ft_basecorrect(char *base)
{
	int	size;

	size = -1;
	while (base[++size])
	{
		if (base[size] == '+' || base[size] == '-' || base[size] == ' '
			|| ft_in_base(base[size], base + size + 1) >= 0)
			return (0);
		if (base[size] >= 9 && base[size] <= 13)
			return (0);
	}
	if (size < 2)
		return (0);
	return (size);
}

int	ft_len_in_base(int nb, int size)
{
	if (nb < size)
		return (1);
	return (1 + ft_len_in_base(nb / size, size));
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	n;
	int	negative;
	int	size;

	size = ft_basecorrect(base);
	if (size < 2)
		return (0);
	while (*str <= ' ' || (base[size] >= 9 && base[size] <= 13))
		str++;
	negative = 1;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			negative = negative * -1;
	n = 0;
	i = ft_in_base(*str, base);
	while (i >= 0)
	{
		n = n * size + i;
		str++;
		i = ft_in_base(*str, base);
	}
	if (negative < 0)
		n *= -1;
	return (n);
}
char	*ft_convert_base2(unsigned int nb, char *base_to, int len, char *c);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				n;
	int				len;
	unsigned int	nb;
	char			*c;

	if (!(ft_basecorrect(base_from)) || !(ft_basecorrect(base_to)))
		return (NULL);
	len = 0;
	n = ft_atoi_base(nbr, base_from);
	if (n < 0)
	{
		nb = -n;
		len++;
	}
	else
		nb = n;
	len += ft_len_in_base(nb, ft_basecorrect(base_to));
	c = malloc(sizeof(char) * (len + 1));
	while (!c)
		c = malloc(sizeof(char) * (len + 1));
	c = ft_convert_base2(nb, base_to, len, c);
	if (n < 0)
		c[0] = '-';
	return (c);
}
