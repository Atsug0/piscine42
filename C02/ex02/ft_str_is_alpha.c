/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:49:23 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/13 00:18:34 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (ft_strlen(str) <= 0)
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 122)
			return (0);
		if (str[i] > 90 && str[i] < 97)
			return (0);
		i++;
	}	
	return (1);
}
