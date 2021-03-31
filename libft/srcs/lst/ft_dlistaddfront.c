/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlistaddfront.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:24:59 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:24:03 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*ft_dlistaddfront(t_dlist_handler *dlist_handler, t_dlist *node)
{
	if (!node)
		return (NULL);
	if (dlist_handler->head == NULL)
	{
		dlist_handler->head = node;
		dlist_handler->tail = node;
	}
	else
	{
		dlist_handler->head->prev = node;
		node->next = dlist_handler->head;
		dlist_handler->head = node;
	}
	dlist_handler->size++;
	return (node);
}
