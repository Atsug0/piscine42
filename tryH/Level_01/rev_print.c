/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:11:49 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/23 14:16:27 by hmoulard         ###   ########.fr       */
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
int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		int	len;

		len = ft_strlen(argv[1]);
		len--;
		while (len >= 0)
		{
			write(1, &argv[1][len], 1);
			len--;
		}
		write(1, "\n", 1);
		return (0);
	}
}
