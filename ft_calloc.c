/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbarbos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 13:06:51 by edbarbos          #+#    #+#             */
/*   Updated: 2020/03/05 13:06:58 by edbarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	char	*dest;

	dest = (char *)malloc(sizeof(char) * count * size);
	if (dest == NULL)
		return (NULL);
	ft_memset(dest, '\0', count * size);
	return (dest);
}
