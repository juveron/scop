/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:24:08 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:23:54 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*ft_dlist_get_by_index(t_dlist_handler *list, size_t index)
{
	size_t		i;
	t_dlist		*tmp_dlist;

	if (index >= list->size || list->head == NULL)
		return (NULL);
	tmp_dlist = list->head;
	i = 0;
	while (i < index)
	{
		if (tmp_dlist == list->tail)
			return (NULL);
		tmp_dlist = tmp_dlist->next;
		i++;
	}
	return (tmp_dlist);
}

size_t	ft_dlist_get_index(t_dlist_handler *list, t_dlist *dlist)
{
	size_t		i;
	t_dlist		*tmp_dlist;

	if (dlist == NULL || list->head == NULL)
		return ((size_t)-1);
	tmp_dlist = list->head;
	i = 0;
	while (tmp_dlist != NULL)
	{
		if (tmp_dlist == dlist)
			return (i);
		tmp_dlist = tmp_dlist->next;
		i++;
	}
	return ((size_t)-1);
}
