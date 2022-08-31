/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:25:30 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/19 13:53:37 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int	check_double(char c,char *str,int pos)
{
	int i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);

		i++;
	}
	return (1);
}

int	check_double1(char *str,char c)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}


void	tunion(char *str,char *str1)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (check_double(str[i],str,i))
			write(1,&str[i],1);
		i++;
	}
	i = 0;
	while (str1[i] != '\0')
	{
		if (check_double1(str,str1[i]))
			if(check_double(str1[i],str1,i))
				write(1,&str1[i],1);
		i++;
	}
}
int	main(int argc,char *av[])
{
	(void)argc;
	tunion(av[1],av[2]);
	(void)av;
	return (0);



}
