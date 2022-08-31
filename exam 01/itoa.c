/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:56:02 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/19 14:12:56 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
int	len(long nb)
{
	int len;

	len = 0;
	if (nb < 0 )
	{
		len++;
		nb = -nb;
	}

	while (nb)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*itoa(int nbr)
{
	char	*str;
	long	n;
	int	i;

	n = nbr;
	i = len(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	str[i--] = '\0';
	while (n > 0)
	{
		str[i] = 48 + (n % 10);
		n /= 10;
		i--;
	}
	return (str);
}

int	main(void)
{
	printf("%s\n", itoa(-1342345));
}
