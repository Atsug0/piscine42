/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 09:49:06 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/15 17:41:02 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	n;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	n = 1;
	while (nb)
		n = n * nb--;
	return (n);
}
