/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:26:27 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/22 18:52:25 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<fcntl.h>
#include<unistd.h>

void	ft_display_file(char *pathname)
{
	char	contains[256];
	int		fd;
	int		len;

	fd = open(pathname,O_RDONLY);
	len = 1;
	while (len > 0)
	{
		len = read(fd, contains, 256);
		write(1, contains, len);
	}
	close(fd);
}
