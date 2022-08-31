/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 12:44:17 by aoberon           #+#    #+#             */
/*   Updated: 2022/08/27 15:46:35 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft.h"

unsigned int	ft_size_read(int fd, unsigned int size_max)
{
	char	buf;

	while (read(fd, &buf, 1) > 0)
	{
		size_max++;
	}
	return (size_max);
}

char	*ft_open(char *dict)
{
	int				fd;
	char			*dict_str;
	unsigned int	size_max;

	size_max = 0;
	fd = open(dict, O_RDONLY);
	if (fd == -1)
		return (NULL);
	size_max = ft_size_read(fd, size_max);
	close(fd);
	dict_str = malloc(sizeof(char) * (size_max + 1));
	dict_str[size_max] = 0;
	if (!dict_str)
		return (NULL);
	fd = open(dict, O_RDONLY);
	if (fd == -1)
		return (NULL);
	read(fd, dict_str, size_max);
	close(fd);
	return (dict_str);
}
