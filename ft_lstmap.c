/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbarbos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 14:27:19 by edbarbos          #+#    #+#             */
/*   Updated: 2020/03/05 14:48:03 by edbarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;

	if (!lst)
		return (NULL);
	result = ft_lstnew(f(lst->content));
	if (!result)
	{
		ft_lstclear(&result, del);
		return (NULL);
	}
	result->next = ft_lstmap(lst->next, f, del);
	return (result);
}
