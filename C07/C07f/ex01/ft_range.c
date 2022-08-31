/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 10:47:05 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/16 21:12:39 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;
	int	len;

	len = max - min;
	if (len <= 0)
		return (NULL);
	tab = malloc(sizeof(int) * len);
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (min < max)
		tab[i++] = min++;
	return (tab);
}
