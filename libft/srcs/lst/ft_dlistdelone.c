/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlistdelone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:32:26 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:32:27 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	clear_handler(t_dlist_handler *dlist_handler)
{
	dlist_handler->head = NULL;
	dlist_handler->tail = NULL;
	dlist_handler->size = 0;
}

void		ft_dlistdelone(t_dlist_handler *dlist_handler, t_dlist *list,
	void (*del)(void *))
{
	if (del)
		del(list->content);
	free(list->content);
	if (dlist_handler->size != 0)
		dlist_handler->size--;
	if (list == dlist_handler->tail && list == dlist_handler->head)
		clear_handler(dlist_handler);
	else
	{
		if (list->next)
			list->next->prev = list->prev;
		else if (list == dlist_handler->tail)
		{
			dlist_handler->tail->prev->next = NULL;
			dlist_handler->tail = dlist_handler->tail->prev;
		}
		if (list->prev)
			list->prev->next = list->next;
		else if (list == dlist_handler->head)
		{
			dlist_handler->head->next->prev = NULL;
			dlist_handler->head = dlist_handler->head->next;
		}
	}
	free(list);
}
