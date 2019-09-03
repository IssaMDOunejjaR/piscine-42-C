/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 18:35:40 by iounejja          #+#    #+#             */
/*   Updated: 2019/08/26 19:24:17 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_integer_table(int *tab, int size)
{
	int tab_order;
	int a;
	int c;

	tab_order = 1;
	while (tab_order)
	{
		a = 0;
		tab_order = 0;
		while (a < size - 1)
		{
			if (tab[a] > tab[a + 1])
			{
				c = tab[a];
				tab[a] = tab[a + 1];
				tab[a + 1] = c;
				tab_order = 1;
			}
			a++;
		}
	}
}

int main()
{
	int size = 6;
	int tab[6] = {2, 6, 9, 8, 3, 4};
	int i = 0;
	ft_sort_integer_table(tab, size);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}