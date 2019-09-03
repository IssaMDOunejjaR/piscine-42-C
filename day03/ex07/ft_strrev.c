/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 19:54:13 by iounejja          #+#    #+#             */
/*   Updated: 2019/08/28 10:34:30 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		s;
	char	t;

	i = 0;
	s = 0;
	if (str)
	{
		while (str[s] != '\0')
		{
			s++;
		}
		while (i < s / 2)
		{
			t = str[i];
			str[i] = str[s - i - 1];
			str[s - i - 1] = t;
			++i;
		}
	}
	return (str);
}

int		main(void)
{
	char *ch;

	*ch = "Hello";
	printf("%s", ft_strrev(ch));
}
