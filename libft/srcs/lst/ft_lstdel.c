/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:25:32 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:24:17 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*nxt;
	t_list	*cur;

	if (alst == NULL || del == NULL)
		return ;
	cur = *alst;
	while (cur != NULL)
	{
		nxt = cur->next;
		ft_lstdelone(&cur, del);
		cur = nxt;
	}
	*alst = NULL;
}
