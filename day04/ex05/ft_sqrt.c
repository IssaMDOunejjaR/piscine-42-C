/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 15:18:48 by iounejja          #+#    #+#             */
/*   Updated: 2019/08/27 19:06:16 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	long a;

	a = 1;
	if (nb < 0)
		return (0);
	while (a * a < nb)
		a++;
	if (a * a == nb)
		return (a);
	return (0);
}
