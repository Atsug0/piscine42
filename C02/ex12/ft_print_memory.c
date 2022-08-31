/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:13:46 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/23 18:43:39 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_base(long int nb, char *base)
{
	if (nb == 0)
		return ;
	ft_print_base(nb / 16, "0123456789abcdef");
	write(1, &base[nb % 16], 1);
}

void	ft_print_str(unsigned char *str, unsigned int fin)
{
	unsigned int	i;

	i = 0;
	while (i < fin)
	{
		if (str[i] > 31 && str[i] < 127)
			write(1, &str[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
}

void	ft_print_hexa(unsigned char *str, unsigned int fin)
{
	unsigned int		i;
	char				*base;

	base = "0123456789abcdef";
	i = 0;
	while (i < 16)
	{
		if (i < fin)
		{
			write(1, &base[str[i] / 16], 1);
			write(1, &base[str[i] % 16], 1);
		}
		else
			write(1, "  ", 2);
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
}

void	autoroute(void *addr, unsigned int size)
{
	write(1, "0000000", 7);
	ft_print_base((long int)addr, "0123456789abcdef");
	write(1, ": ", 2);
	ft_print_hexa((unsigned char *)addr, size);
	ft_print_str((unsigned char *)addr, size);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int			index;
	unsigned int			reminder;

	index = 0;
	reminder = size % 16;
	while (index < size / 16)
	{
		autoroute(addr + index * 16, 16);
		write(1, "\n", 1);
		index++;
	}
	if (reminder)
	{
		autoroute(addr + index * 16, reminder);
		write(1, "\n", 1);
	}
	return (addr);
}
int	strlem(char *c)
{
	int i = 0;
	while (c[i])
		i++;
	return (i);
}
int	main(void)
{
	ft_print_memory("iu;fuigUEGHOIWhgiwGRHRGWIUWGRWHorOJRG'JWRORGihwIHGPRIWHiwgorHIWRGHPWOJHWIEWJhfH",strlem("iu;fuigUEGHOIWhgiwGRHRGWIUWGRWHorOJRG'JWRORGihwIHGPRIWHiwgorHIWRGHPWOJHWIEWJhfH"));
}
