/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:32:43 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:32:45 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddend(t_list **alst, t_list *new)
{
	t_list	*cur;

	if (alst == NULL)
		return ;
	cur = *alst;
	if (cur != NULL && new != NULL)
	{
		while (cur->next != NULL)
			cur = cur->next;
		cur->next = new;
	}
	else if (new != NULL)
		*alst = new;
}
