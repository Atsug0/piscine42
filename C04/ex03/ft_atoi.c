/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 21:03:08 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/17 10:54:24 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	is_good(char str)
{
	if (str >= '0' && str <= '9')
		return (1);
	return (str == '+' || str == '-');
}

int	is_num(char str)
{
	if (str >= '0' && str <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	neg;
	int	num;

	neg = 1;
	num = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg = neg * -1;
		str++;
	}
	while (*str >= '0' && *str <= '9' && *str)
	{
		num = num * 10 + *str - 48;
		str++;
	}
	return (neg * num);
}
