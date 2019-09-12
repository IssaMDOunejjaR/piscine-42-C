/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 13:54:16 by iounejja          #+#    #+#             */
/*   Updated: 2019/09/10 00:33:03 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

char					*ft_strdup(char *src)
{
	int		i;
	char	*t;

	i = 0;
	while (src[i] != '\0')
		i++;
	t = (char*)malloc(sizeof(t) * (i + 1));
	if (!t)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		t[i] = src[i];
		i++;
	}
	t[i] = '\0';
	return (t);
}

int						ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

struct	s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	int				i;
	t_stock_par		*pt;

	i = 0;
	pt = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	while (i < ac)
	{
		pt[i].size_param = ft_strlen(av[i]);
		pt[i].str = av[i];
		pt[i].copy = ft_strdup(av[i]);
		pt[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	pt[i].str = 0;
	return (pt);
}
