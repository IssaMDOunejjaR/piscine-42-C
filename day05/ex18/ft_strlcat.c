/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iounejja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 08:59:38 by iounejja          #+#    #+#             */
/*   Updated: 2019/09/02 08:59:40 by iounejja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	j;
	unsigned int	l;

	i = 0;
	j = 0;
	l = 0;
	while (dest[i] != '\0')
	{
		i++;
		l++;
	}
	while (src[j] != '\0')
		j++;
	if (size >= i)
		l += size;
	else
		l = i;
	while (src[j] != '\0' && i - 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size > i)
		return size + l;
	else
		return l;
}

int main()
{
	char c1[] = "abcd";
	char c2[] = "ef";
	printf("strlcat = %lu\n", strlcat(c1, c2, 5));
	//printf("ft_strlcat = %d\n", ft_strlcat(c1, c2, 5));
	printf("%s\n", c1);
}