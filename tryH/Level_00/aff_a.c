/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:46:54 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/22 19:54:47 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	if (argc != 2)
	{
		write(1, "a\n", 2);
		return (0);
	}
	i = -1;
	while (argv[1][++i])
		if (argv[1][i] == 'a')
			write(1, "a", 1);
	write(1, "\n", 1);
	return (0);
}