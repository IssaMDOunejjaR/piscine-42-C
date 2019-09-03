/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 14:01:07 by iounejja          #+#    #+#             */
/*   Updated: 2019/08/30 14:28:48 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	unsigned int i;

	i = 0;
	if (value < 0)
	{
		value = -value;
	}
	while (value / 2 != 0)
	{
		if (value % 2 == 1)
		{
			i++;
		}
		value = value / 2;
	}
	if (value % 2 == 1)
		i++;
	return (i);
}
