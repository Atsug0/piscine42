/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:37:34 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/17 10:51:32 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_in_base(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (i);
	return (-1);
}

int	ft_baselen(char *base)
{
	int	len;

	len = -1;
	while (base[++len])
	{
		if (base[len] == '-' || base[len] == '+' || base[len] == ' '
			|| ft_in_base(base[len], base + len + 1) >= 0)
			return (0);
		if (base[len] >= 9 && base[len] <= 13)
			return (0);
	}
	return (len);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	n;
	int	neg;
	int	len;

	len = ft_baselen(base);
	if (len < 2)
		return (0);
	while (*str <= ' ' || (*str >= 9 && *str <= 13))
		str++;
	neg = 1;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			neg = neg * -1;
	n = 0;
	i = ft_in_base(*str, base);
	while (i >= 0)
	{
		n = n * len + i;
		str++;
		i = ft_in_base(*str, base);
	}
	if (neg < 0)
		n *= -1;
	return (n);
}
