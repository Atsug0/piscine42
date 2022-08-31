/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 16:58:12 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/13 20:26:59 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	print_line_horizontaly(char droite, char gauche, char milieu,int longueur)
{
	ft_putchar(gauche);
	while (longueur-- > 2)
		ft_putchar(milieu);
	if (longueur == 1)
		ft_putchar(droite);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
		return ;
	print_line_horizontaly('A', 'C', 'B', x);
	while (y-- < 2)
		print_line_horizontaly('B', 'B', ' ',x);
	if (y == 1)
		print_line_horizontaly('A', 'C', 'B',x);

}


