/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:47:03 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/16 21:16:25 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>

int	ft_basecorrect(char *base);

int	ft_in_base(char c, char *base);

char	*ft_convert_base2(unsigned int nb, char *base_to, int len, char *c)
{
	int	size;

	size = ft_basecorrect(base_to);
	c[len] = '\0';
	while (len--)
	{
		c[len] = base_to[nb % size];
		nb /= size;
	}
	return (c);
}
