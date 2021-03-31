/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:23:57 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:23:51 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist_handler	*ft_dlist_create(void)
{
	t_dlist_handler *dlist_handler;

	return (dlist_handler = ft_memalloc(sizeof(t_dlist_handler)));
}
