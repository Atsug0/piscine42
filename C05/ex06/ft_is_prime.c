/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:44:29 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/16 00:25:12 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_is_prime(int nb)
{
	unsigned int	i;

	if (nb < 3 || !(nb % 2))
		return (nb == 2);
	i = 3;
	while (i * i <= (unsigned int)nb)
	{	
		if (!(nb % i))
			return (0);
		i = i + 2;
	}
	return (1);
}
