/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbarbos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 20:18:51 by edbarbos          #+#    #+#             */
/*   Updated: 2020/01/30 20:19:54 by edbarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long		ft_split_count(const char *s, char c)
{
	long	i;
	long	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

char		**ft_split(char const *s, char c)
{
	char	**strs;
	long	start;
	long	end;
	long	i;

	if (s == NULL)
		return (NULL);
	if (!(strs = (char **)malloc(sizeof(char *) * (ft_split_count(s, c) + 1))))
		return (NULL);
	start = 0;
	i = -1;
	end = 0;
	while (++i != ft_split_count(s, c))
	{
		while (s[start] == c)
			start++;
		end = start;
		while (s[end] && s[end] != c)
			end++;
		if (!(strs[i] = ft_substr(s, start, (end - start))))
			return (NULL);
		start = end;
	}
	strs[i] = 0;
	return (strs);
}
