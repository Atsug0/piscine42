/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 00:01:19 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/14 13:00:57 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_itsdigits(char c)
{
	return (c >= '0' && c <= '9');
}

char	*ft_itslower(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{	
		if (c[i] >= 'A' && c[i] <= 'Z')
			c[i] += 32;
		i++;
	}
	return (c);
}

char	ft_isupper(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int	ft_str_is_alpha(char str)
{
	return ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'));
}

char	*ft_strcapitalize(char *str)
{
	char	*s;
	int		i;

	s = ft_itslower(str);
	s[0] = ft_isupper(s[0]);
	i = 1;
	while (s[i])
	{
		if (!ft_str_is_alpha(s[i - 1]) && !ft_itsdigits(s[i - 1]))
			s[i] = ft_isupper(s[i]);
		i++;
	}
	return (str);
}
/*
#include <unistd.h>

char	*ft_strcapitalize(char *src);

void	ft_putstr(char *str)
{
	int l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	write(1, str, l);
}

int		main()
{
	char c[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_putstr("Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un");
	ft_putstr("\n");
	ft_putstr(ft_strcapitalize(c));
}
*/
