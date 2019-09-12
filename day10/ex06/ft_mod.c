/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mod.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 22:54:27 by iounejja          #+#    #+#             */
/*   Updated: 2019/09/11 22:54:29 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bibl.h"

void		ft_mod(int x, int y)
{
	if (y == 0)
		write(1, "Stop : modulo by zero", 21);
	else
		ft_putnbr(x % y);
}