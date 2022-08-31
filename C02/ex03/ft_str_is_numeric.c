/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:57:14 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/13 12:28:02 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = -1;
	if (ft_strlen(str) <= 0)
		return (1);
	while (str[++i] != '\0')
		if (str[i] < 48 || str[i] > 59)
			return (0);
	return (1);
}
