/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:07:16 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/15 15:25:16 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char *argv[], int a, int b)
{
	char	*c;

	c = argv[a];
	argv[a] = argv[b];
	argv[b] = c;
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	min;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		min = i;
		while (j < argc)
		{
			if (ft_strcmp(argv[j], argv[min]) < 0)
				min = j;
			j++;
		}
		if (min != i)
			ft_swap(argv, min, i);
		i++;
	}
	i = 1;
	while (i < argc)
		ft_putstr(argv[i++]);
}
