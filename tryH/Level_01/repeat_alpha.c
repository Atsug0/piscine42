/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:24:47 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/23 14:10:12 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
int	main(int argc, char *argv[])
{
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		int	i;
		int	nb;
		
		nb = 1;
		i = 0;
		while(argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				nb = argv[1][i] - 96;
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				nb = argv[1][i] - 64;
			while (nb)
			{
				write(1, &argv[1][i], 1);
				nb--;
			}
			i++;

		}
		write(1, "\n", 1);
	}
	return (0);
}
