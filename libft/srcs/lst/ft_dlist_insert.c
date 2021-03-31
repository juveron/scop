/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_insert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:24:43 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:23:57 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lst.h"

t_dlist	*ft_dlist_insert(t_dlist_handler *handler, t_dlist *node, t_dlist *new)
{
	if (!new)
		return (NULL);
	new->next = node;
	new->prev = node->prev;
	new->prev->next = new;
	node->prev = new;
	if (handler->head == node)
		handler->head = new;
	handler->size++;
	return (new);
}
