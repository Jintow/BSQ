/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 12:39:39 by jlitaudo          #+#    #+#             */
/*   Updated: 2022/09/18 12:19:11 by jlitaudo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char **argv)
{
	char	*read_dict(char *dict)
	char	*dict_content;
	int		size;
	int		file;
	char	i_file[BUF_SIZE];

	file = open(dict, O_RDONLY);
	if (file < 0)
	{
		ft_putstr(ERR_DIC);
		return (NULL);
	}
	size = 0;
	while (read(file, i_file, BUF_SIZE))
		size++;
	close(file);
	file = open(dict, O_RDONLY);
	dict_content =  malloc(sizeof(char) * (size + 1));
	if (!(dict_content))
		return (NULL);
	size = read(file, dict_content, size);
	dict_content[size] = 0;
	close(file);
	return (dict_content);
}
}
