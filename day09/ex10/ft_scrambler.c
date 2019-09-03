/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 13:15:40 by iounejja          #+#    #+#             */
/*   Updated: 2019/08/30 14:27:56 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int pa;
	int pb;
	int pc;
	int pd;

	pa = ***a;
	pb = *b;
	pc = *******c;
	pd = ****d;
	*******c = pa;
	****d = pc;
	*b = pd;
	***a = pb;
}