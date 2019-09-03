/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 16:54:31 by iounejja          #+#    #+#             */
/*   Updated: 2019/08/23 16:03:43 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char letter);

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = -1;
	while (a++ < 9)
	{
		b = a;
		while (b++ < 9)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_putchar(48 + a);
				ft_putchar(48 + b);
				ft_putchar(48 + c);
				c++;
				if (a < 7)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
