/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:59:09 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/19 13:24:42 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	check_double(char *str, char c,int pos)
{
	int	i;
	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	inter(char *str,char *str1)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str1[j] != '\0')
		{
			if (str[i] == str1[j])
			{
				if (check_double(str,str[i],i))
				{
					write(1,&str[i],1);
					break;
				}
			}
			j++;
		}
		i++;
	}
}

int	main(int argc,char *av[])
{
	(void)argc;
	inter(av[1],av[2]);
	(void)av;
	return (0);
}

