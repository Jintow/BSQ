/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 01:29:40 by jlitaudo          #+#    #+#             */
/*   Updated: 2022/09/19 14:47:13 by jlitaudo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "srcs.h"

void	free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	return ;
}

/*void	free_dico(t_dico_nb *tab)
{
	int	i;

	i = 0;
	while (tab[i].nb_trad)
		free(tab[i++].nb_trad);
	return ;
}*/
