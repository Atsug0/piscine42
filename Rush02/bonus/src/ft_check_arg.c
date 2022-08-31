/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piele-bo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 14:16:19 by piele-bo          #+#    #+#             */
/*   Updated: 2022/08/27 14:51:35 by piele-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft.h"

int	as_minus(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		if (c[i++] == '-')
			return (1);
	return (0);
}

int	ft_check_arg(int argc, char **argv, char **path, t_int *value)
{
	if (argc >= 2 && argc <= 3)
	{
		if (argc == 3)
		{
			if (check_ext(argv[1], ".dict") == 1)
			{	
				*path = argv[1];
				if (!ft_is_digit(argv[2]))
					return (0);
				*value = ft_atoi(argv[2]);
				if ((ft_strlen(argv[2]) < 39))
					return (1);
			}
		}
		else
		{
			*path = "numbers.dict";
			if (!ft_is_digit(argv[1]))
				return (0);
			*value = ft_atoi(argv[1]);
			if ((ft_strlen(argv[1]) < 39))
				return (1);
		}
	}
	return (ft_check_arg2(path, value, argc));
}

int	ft_check_arg2(char **path, t_int *value, int argc)
{
	char	*arg;

	arg = NULL;
	arg = ft_read_arg(arg);
	*path = "numbers.dict";
	if (argc != 1)
		return (0);
	if (ft_is_digit(arg))
	{
		free(arg);
		return (0);
	}
	*value = ft_atoi(arg);
	if (ft_strlen(arg) < 39)
	{
		free(arg);
		return (1);
	}
	free(arg);
	return (0);
}
