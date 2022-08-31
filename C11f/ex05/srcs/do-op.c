/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 21:30:36 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/23 21:50:33 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft.h"

int	operator(int a, char *c, int b)
{
	int	r;
	int	(*operator[5])(int, int);

	operator[0] = &addition;
	operator[1] = &diff;
	operator[2] = &div;
	operator[3] = &produit;
	operator[4] = &modulo;
	r = 1;
	if (c[0] == '+')
		r = operator[0](a, b);
	else if (c[0] == '-')
		r = operator[1](a, b);
	else if (c[0] == '*')
		r = operator[3](a, b);
	else if (c[0] == '/')
		r = operator[2](a, b);
	else if (c[0] == '%')
		r = operator[4](a, b);
	return (r);
}

int	ft_signe(char c)
{
	return (c == '+' || c == '-' || c == '*' || c == '/' || c == '%');
}

void	do_op(char *a, char *b, char *c)
{
	int	a1;
	int	c1;
	int	r;

	r = 1;
	a1 = ft_atoi(a);
	c1 = ft_atoi(c);
	if (!ft_signe(b[0]))
		write(1, "0", 1);
	else if (b[0] == '/' && c1 == 0)
		write(1, "Stop : division by zero", 23);
	else if (b[0] == '%' && c1 == 0)
		write(1, "Stop : modulo by zero", 22);
	else
	{
		r *= (operator(a1, b, c1));
		ft_putnbr(r);
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc == 4)
		do_op(argv[1], argv[2], argv[3]);
	return (0);
}
