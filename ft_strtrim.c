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

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		size;
	const char	*str_beguin;
	const char	*str_end;
	char		*str;

	if (!s1)
		return (NULL);
	size = ft_strlen(s1);
	str_beguin = s1;
	str_end = s1 + size - 1;
	while (ft_strchr(set, *str_beguin) && str_beguin < str_end)
		str_beguin++;
	while (ft_strchr(set, *str_end) && str_end > str_beguin)
		str_end--;
	if (str_end == str_beguin)
		size = 0;
	else
		size = str_end - str_beguin + 1;
	str = (char *)malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, str_beguin, size);
	str[size] = '\0';
	return (str);
}
