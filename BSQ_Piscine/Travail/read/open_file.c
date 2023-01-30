/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:43:00 by jlitaudo          #+#    #+#             */
/*   Updated: 2022/09/19 21:46:03 by vburton          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../srcs/srcs.h"
#include "read.h"

char	**read_map(char *pwd_map)
{	
	char	*map_content;
	char	**tab_map;

	map_content = open_map(pwd_map);
	if (map_content)
	{	
		tab_map = ft_split(map_content, "\n");
		free(map_content);
		return (tab_map);
	}
	return (NULL);
}

char	*open_map(char *pwd_map)
{
	char	*map_content;
	int		size;
	int		file;
	char	i_file[1];

	file = open(pwd_map, O_RDONLY);
	if (file < 0)
	{
		ft_putstr(ERR_FILE);
		return (NULL);
	}
	size = 0;
	while (read(file, i_file, 1))
		size++;
	close(file);
	file = open(pwd_map, O_RDONLY);
	map_content = malloc(sizeof(char) * (size + 1));
	if (!(map_content))
		return (NULL);
	size = read(file, map_content, size);
	map_content[size] = 0;
	close(file);
	return (map_content);
}
