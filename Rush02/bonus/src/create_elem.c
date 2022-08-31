/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_elem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 22:28:05 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/26 22:34:21 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft.h"

t_ch	*create_elem(t_int value, char *line)
{
	t_ch	*res;

	res = malloc(sizeof(t_ch));
	if (!res)
		return (NULL);
	res->next = NULL;
	res->value = value;
	res->line = line;
	return (res);
}
