/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 21:07:11 by jlitaudo          #+#    #+#             */
/*   Updated: 2022/09/20 21:49:01 by jlitaudo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

int	redflag(char *map)
{
	int	len;
	int	i;
	int	nb_line;
	int	count;

	i = 0;
	if (ft_strlen(map) < 4)
		return (0);
	while (map[i] != '\n')
		i++;
	len = i;
	nb_line = ft_atoi(map, len - 3);
	count = 0;
	i = 0;
	while (map[i])
	{
		if (map[i] == '\n')
			count++;
		i++;
	}
	if (count - 1 != nb_line)
		return (0);
	return (1);
}
