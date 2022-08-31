/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:34:27 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/23 10:44:40 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<unistd.h>
void	write_numb(int i)
{
	if (i > 9)
	{
		write_numb(i/10);
		i = i % 10;
	}
	write (1, &"0123456789"[i], 1);
}
int	main(void)
{
	int	i;

	i = 1;
	while (i < 101)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			write(1, "fizzbuzz", 8);
		}
		else
		{
			if (i % 3 == 0)
				 write(1, "fizz", 4);
			else
			{
				if (i % 5 == 0)
					 write(1, "buzz", 4);
				else
					write_numb(i);
			}
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
