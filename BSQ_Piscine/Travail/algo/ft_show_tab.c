/* ************************************************************************** */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlitaudo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:03:56 by jlitaudo          #+#    #+#             */
/*   Updated: 2022/09/14 17:26:35 by jlitaudo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "algo.h"

void	ft_show_tab(t_stock par)
{
	printf("x : %d\n", par.x);
	printf("y : %d\n", par.y);
	printf("Len_max : %d\n", par.len_max);
	printf("Length : %d\n", par.length);
	printf("Height : %d\n",par.height);
	printf("Obs : %c\n", par.obs);
	printf("Fill : %c\n", par.fill);
}
