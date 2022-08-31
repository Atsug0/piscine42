/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:53:09 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/21 03:37:16 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fonction.h"
#include<stdio.h>

int	ft_tablen(char **str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_verif_arg(char **str)
{
	if (ft_tablen(str) != 2)
		return (0);
	if (ft_strlen(str[1]) != 31)
		return (0);
	return (ft_check_string(str[1]));
}

int	main(int argc, char *argv[])
{
	int		i;
	int		**tab;

	if (ft_verif_arg(argv) == 0)
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	tab = ft_init(argv[1]);
	if (!tab)
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	if (ft_resolve(tab, 0))
		ft_print(tab);
	else
		write(2, "Error\n", 6);
	i = -1;
	while (++i < 6)
	{
		free(tab[i]);
	}
	free(tab);
}
