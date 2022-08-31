/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:54:09 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/23 10:57:16 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int	ft_strlen(char	*c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;

	i = ft_strlen(str);
	write(1, str, i);
}

int	main(int argc, char *argv[])
{
	ft_putstr(argv[argc - 1]);
	return (0);
}
