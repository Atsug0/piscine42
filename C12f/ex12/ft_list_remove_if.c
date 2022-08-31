/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:39:15 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/28 19:46:04 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_list.h"
#include<stdlib.h>

void	bigfree(t_list *temp, void (*free_fct)(void *))
{
	if (free_fct)
		free_fct(temp->data);
	free(temp);
}

void	ft_list_remove_if(t_list **b, void *d, int (*cmp)(), \
void (*free_fct)(void *))
{
	t_list	*temp;
	t_list	*tempo;

	temp = *b;
	tempo = NULL;
	while (temp)
	{
		if (cmp(temp->data, d) == 0)
		{
			if (tempo)
				tempo->next = temp->next;
			else
				*b = temp->next;
			bigfree(temp, free_fct);
			if (tempo)
				temp = tempo->next;
			else
				temp = *b;
		}
		else
		{
			tempo = temp;
			temp = temp->next;
		}
	}
}
