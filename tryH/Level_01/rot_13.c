/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:40:33 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/23 14:51:07 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	int	i;

	i = 0;
	while (argv[1][i])
	{
		if ((argv[1][i] >= 'A' && argv[1][i] <= 'M') || (argv[1][i] >= 'a' && argv[1][i] <= 'm'))
			ft_putchar(argv[1][i] + 13);
		else
		{
			if ((argv[1][i] > 'M' && argv[1][i] <= 'Z') || (argv[1][i] > 'm' && argv[1][i] <= 'z'))
                        	ft_putchar(argv[1][i] - 13);
			else
				ft_putchar(argv[1][i]);
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}		
