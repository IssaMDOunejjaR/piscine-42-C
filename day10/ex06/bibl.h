/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bibl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:15:41 by iounejja          #+#    #+#             */
/*   Updated: 2019/09/12 16:03:25 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIBL_H
# define BIBL_H

# include <unistd.h>

void	ft_putchar(char c);
int		ft_atoi(char *str);
void	ft_putnbr(int letter);
void	ft_add(int x, int y);
void	ft_sub(int x, int y);
void	ft_multi(int x, int y);
void	ft_div(int x, int y);
void	ft_mod(int x, int y);
int		ft_opera(char *opera);
int		ft_calc(int x, int y, int opera);
int		ft_str_is_alpha(char *str);

#endif
