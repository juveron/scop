/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlistdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:32:08 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:32:10 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlistdel(t_dlist_handler **dlist_handler, void (*del)(void *))
{
	t_dlist	*nxt;
	t_dlist	*cur;

	cur = (*dlist_handler)->head;
	while (cur != NULL)
	{
		nxt = cur->next;
		if (del)
			del(cur->content);
		free(cur->content);
		free(cur);
		cur = nxt;
	}
	free(*dlist_handler);
	*dlist_handler = NULL;
}
