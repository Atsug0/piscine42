/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:15:11 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/25 18:30:55 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include<stdlib.h>

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}t_list;
t_list	*ft_create_elem(void *data);

#endif
