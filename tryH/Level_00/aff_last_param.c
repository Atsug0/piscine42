/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:13:18 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/22 21:16:29 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while(c[i])
		i++;
	return (i);
}

int	main(int a, char *b[])
{
	if (a != 1)
		write(1, b[a - 1],ft_strlen(b[a - 1]));
	write(1, "\n", 1);
	return (0);
}
