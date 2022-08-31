/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 13:56:51 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/13 16:32:04 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*c;

	c = dest;
	while (*c)
		c++;
	while (nb-- && *src)
		*c++ = *src++;
	*c = '\0';
	return (dest);
}
