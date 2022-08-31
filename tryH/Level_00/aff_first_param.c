/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 20:39:43 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/22 20:44:16 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
int	main(int a, char *b[])
{
	int	i;

	if (a == 1)
	{	
		write(1, "\n",1);
		return (-1);
	}
	i = ft_strlen(b[1]);
	write(1, b[1], i);
	write(1, "\n",1);
}
