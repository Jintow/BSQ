/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 19:26:44 by jlitaudo          #+#    #+#             */
/*   Updated: 2022/09/20 13:00:46 by vburton          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SRCS_H
# define SRCS_H

# include <unistd.h>
# include <stdlib.h>

void		ft_putstr(char *str);
int			ft_strlen(char *str);
int			ft_atoi(char *str, int nbr);
char		**ft_split(char *str, char *charset);
char		*ft_strdup(char *src);
void		free_tab(char **tab);
//void		free_stock(t_stock *tab);

#endif
