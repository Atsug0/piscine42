/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 10:14:20 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/15 19:47:08 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_iterative_power(int nb, int power)
{	
	int	n;

	if (power < 1)
		return (!power);
	n = nb;
	while (--power)
		n *= nb;
	return (n);
}
