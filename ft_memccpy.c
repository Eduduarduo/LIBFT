/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbarbos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 04:07:00 by edbarbos          #+#    #+#             */
/*   Updated: 2020/01/31 04:07:09 by edbarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	char			*d;
	char			*s;
	unsigned char	p;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	p = (unsigned char)c;
	while (i < n)
	{
		d[i] = s[i];
		if ((unsigned char)s[i] == p)
			return ((char *)dst + i + 1);
		i++;
	}
	return (NULL);
}
