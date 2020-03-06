/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbarbos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 08:27:54 by edbarbos          #+#    #+#             */
/*   Updated: 2020/01/31 08:28:29 by edbarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*temp_d;
	unsigned char	*temp_s;

	if (!dst && !src)
		return (dst);
	else
	{
		temp_d = (unsigned char *)dst;
		temp_s = (unsigned char *)src;
		if (temp_d < temp_s)
			ft_memcpy(temp_d, temp_s, len);
		else
			while (len--)
				temp_d[len] = temp_s[len];
	}
	return (dst);
}
