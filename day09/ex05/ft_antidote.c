/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 13:04:48 by iounejja          #+#    #+#             */
/*   Updated: 2019/08/30 14:27:24 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	int t[3];
	int x;
	int y;
	int z;

	x = 0;
	t[0] = i;
	t[1] = j;
	t[2] = k;
	while (x < 2)
	{
		y = 0;
		while (y < 2)
		{
			if (t[y] > t[y + 1])
			{
				z = t[y];
				t[y] = t[y + 1];
				t[y + 1] = z;
			}
			y++;
		}
		x++;
	}
	return (t[1]);
}
