/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbarbos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 03:50:07 by edbarbos          #+#    #+#             */
/*   Updated: 2020/01/31 03:50:10 by edbarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*buffer_src;
	unsigned char		*buffer_dest;

	if (dst == NULL && src == NULL)
		return (NULL);
	buffer_src = (unsigned char *)src;
	buffer_dest = (unsigned char *)dst;
	while (n--)
		*buffer_dest++ = *buffer_src++;
	return (dst);
}
