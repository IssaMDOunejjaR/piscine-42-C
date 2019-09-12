/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 14:38:48 by iounejja          #+#    #+#             */
/*   Updated: 2019/09/12 16:05:56 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bibl.h"

void	operation(int x, int y, char o)
{
	void (*operations[5])(int, int);

	operations[0] = ft_add;
	operations[1] = ft_sub;
	operations[2] = ft_multi;
	operations[3] = ft_div;
	operations[4] = ft_mod;
	if (o == '+')
		(*operations[0])(x, y);
	else if (o == '-')
		(*operations[1])(x, y);
	else if (o == '*')
		(*operations[2])(x, y);
	else if (o == '/')
		(*operations[3])(x, y);
	else if (o == '%')
		(*operations[4])(x, y);
	else
		ft_putchar('0');
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int x;
	int y;

	if (argc == 4)
	{
		if (!ft_str_is_alpha(argv[1]) || !ft_str_is_alpha(argv[3]))
		{
			x = ft_atoi(argv[1]);
			y = ft_atoi(argv[3]);
			operation(x, y, argv[2][0]);
		}
		else
			write(1, "0\n", 2);
		return (0);
	}
}
