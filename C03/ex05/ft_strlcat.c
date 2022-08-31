/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 11:27:22 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/14 03:53:51 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	strlenn(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length;

	i = 0;
	length = 0;
	while (length < size && dest[length])
		length++;
	while (src[i] && size && length + i < size - 1)
	{
		dest[length + i] = src[i];
		i++;
	}
	if (length < size)
		dest[length + i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i + length);
}
