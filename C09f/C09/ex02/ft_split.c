/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:22:59 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/16 23:43:30 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_is_charset(char *str, char *charset)
{
	while (*charset)
		if (*str == *charset++)
			return (1);
	return (0);
}

int	ft_len_w(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !(ft_is_charset(str + i, charset)))
		i++;
	return (i);
}

int	ft_nbr_w(char *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	while (*str)
	{
		while (*str && (ft_is_charset(str, charset)))
			str++;
		i = ft_len_w(str, charset);
		str += i;
		if (i)
			count++;
	}
	return (count);
}

char	*ft_copy(char *src, int n)
{
	char	*res;

	res = malloc((n + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[n] = '\0';
	while (n--)
		res[n] = src[n];
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	int		size;
	int		i;
	int		n;
	char	**tab;

	size = ft_nbr_w(str, charset);
	tab = malloc(sizeof(char *) * (size + 1));
	if (!tab)
		return (NULL);
	i = -1;
	while (++i < size)
	{
		while (*str && ft_is_charset(str, charset))
			str++;
		n = ft_len_w(str, charset);
		tab[i] = ft_copy(str, n);
		if (!tab[i])
			return (NULL);
		str += n;
	}
	tab[size] = 0;
	return (tab);
}
