/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 10:55:26 by iounejja          #+#    #+#             */
/*   Updated: 2019/08/27 18:55:51 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;

	i = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power > 0)
	{
		while (power != 0)
		{
			i *= nb;
			power--;
		}
	}
	else
		return (1);
	return (i);
}
