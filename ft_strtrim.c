/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbarbos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 20:17:29 by edbarbos          #+#    #+#             */
/*   Updated: 2020/01/30 20:17:44 by edbarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	int		len;
	char	*str;

	i = 0;
	j = 0;
	k = 0;
	if (s1 == NULL)
		return (NULL);
	while(s1[i] == set[i])
	{	
		i++;
	}
	while(s1[ft_strlen(s1) - j - 1] == set[ft_strlen(set) - j - 1])
	{	
		j++;
	}
	len = ft_strlen(s1) - i - j;
	str = ft_substr(s1, i, len);
	if (str == NULL)
		return (NULL);
	//while(k <= len )
	//{
	//	str[k] = s1[i + k];
	//	k++;
	//}
	//str[k] = '\0';
	return (str);
}
