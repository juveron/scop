/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlistaddend.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:24:53 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:24:00 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*ft_dlistaddend(t_dlist_handler *dlist_handler, t_dlist *node)
{
	if (!node)
		return (NULL);
	if (dlist_handler->tail == NULL)
	{
		dlist_handler->tail = node;
		dlist_handler->head = node;
	}
	else
	{
		dlist_handler->tail->next = node;
		node->prev = dlist_handler->tail;
		dlist_handler->tail = node;
	}
	dlist_handler->size++;
	return (node);
}
