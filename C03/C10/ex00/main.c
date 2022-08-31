/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:52:39 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/22 19:02:28 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<fcntl.h>

void    ft_display_file(char *pathname);

int	main(int argc, char *argv[])
{
	int	fd;

	if (argc == 1)
	{
		write(2, "File name missing.\n",20);
		return (-1);	
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n",22);
		return (-1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n",20);
		return (-1);
	}
	ft_display_file(argv[1]);
}
