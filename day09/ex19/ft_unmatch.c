/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 14:12:09 by iounejja          #+#    #+#             */
/*   Updated: 2019/08/30 14:30:22 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int a;
	int b;
	int c;

	a = 0;
	c = 0;
	while (a < length)
	{
		b = 0;
		c = 0;
		while (b < length)
		{
			if (tab[a] == tab[b])
				c++;
			b++;
		}
		if (c % 2 != 0)
			return (tab[a]);
		a++;
	}
	return (0);
}
