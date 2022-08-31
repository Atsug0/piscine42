/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschneid <eschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 11:40:27 by eschneid          #+#    #+#             */
/*   Updated: 2022/08/20 17:51:45 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_char_space(char c, int i)

{
	if (i % 2 == 0)
	{
		if (c < 49 || c > 52)
			return (0);
	}
	else
	{
		if (c != 32)
			return (0);
	}
	return (1);
}

int	ft_check_string(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_check_char_space(str[i], i) == 0)
			return (0);
		i++;
	}
	return (1);
}
