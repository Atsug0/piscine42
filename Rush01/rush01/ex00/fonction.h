/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 18:03:40 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/21 00:39:39 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FONCTION_H
# define FONCTION_H
# include<unistd.h>
# include<stdlib.h>

int		ft_resolve(int **tab, int i);
int		ft_check_string(char *str);
int		ft_strlen(char *str);
int		ft_can_place(int **tab, int i, int number);
int		check_line(int **tab, int i, int number);
int		check_columns(int **tab, int i, int number);
int		ft_complete(int **str);
int		**ft_init(char *str);
int		**ft_new_table(char *argv);
void	ft_print(int **str);
void	ft_init_boarders(int **tab, char *str);

#endif
