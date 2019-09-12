/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:20:27 by iounejja          #+#    #+#             */
/*   Updated: 2019/09/08 12:57:27 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int l;
	int *nbs;
	int i;

	if (min >= max)
		return (NULL);
	else
	{
		l = max - min;
		nbs = malloc(sizeof(nbs) * l);
		i = 0;
		while (i < l)
		{
			nbs[i] = min + i;
			i++;
		}
		nbs[i] = '\0';
		return (nbs);
	}
}

int main()
{
	int *t;
	int i;

	i = 0;
	t = ft_range(10, 5);
	printf("%p", t);
}
