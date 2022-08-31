/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 20:31:54 by aoberon           #+#    #+#             */
/*   Updated: 2022/08/28 20:39:27 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft.h"

char	*ft_strcat(char *dest, char src)
{
	int	length;

	length = 0;
	while (dest[length])
		length++;
	dest[length] = src;
	dest[length + 1] = '\0';
	return (dest);
}

char	*ft_read_arg(char *arg)
{
	char	c;

	arg = malloc(sizeof(char) * 42);
	if (!arg)
		return (NULL);
	arg[0] = 0;
	while (read(0, &c, 1) > 0)
	{
		if (c == '\n')
			break ;
		arg = ft_strcat(arg, c);
	}
	return (arg);
}
