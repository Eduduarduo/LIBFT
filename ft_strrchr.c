/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbarbos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 20:33:05 by edbarbos          #+#    #+#             */
/*   Updated: 2020/02/28 20:33:09 by edbarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	if ((char)c == '\0')
	{
		s = s + ft_strlen(s);
		return (char *)s;
	}
	while (*s)
	{
		if (*s == (char)c)
			last = (char*)s;
		s++;
	}
	return (last);
}
