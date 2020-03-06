/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbarbos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 14:25:07 by edbarbos          #+#    #+#             */
/*   Updated: 2020/03/05 14:25:15 by edbarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *lastelement;

	lastelement = ft_lstlast(*lst);
	if (lastelement != NULL)
	{
		lastelement->next = new;
		new->next = NULL;
	}
	else
		*lst = new;
}
