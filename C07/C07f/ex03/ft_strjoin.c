/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 11:21:56 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/16 12:18:03 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*c;

	i = 0;
	j = 0;
	while (i < size)
		j += ft_strlen(strs[i++]);
	if (size)
		j += (size - 1) * ft_strlen(sep);
	c = malloc(sizeof(char) * (j + 1));
	if (c == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < size)
	{
		ft_strcpy(c + j, strs[i]);
		j += ft_strlen(strs[i]);
		if (++i < size)
			j += ft_strlen(sep) + c + j - ft_strcpy(c + j, sep);
	}
	c[j] = '\0';
	return (c);
}
