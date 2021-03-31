/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memfill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:01:34 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:28:01 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memfill(void *s, void *elem, size_t number_of_elem,
	size_t sizeof_elem)
{
	size_t	i;

	i = 0;
	while (i < number_of_elem)
	{
		ft_memcpy(s + i * sizeof_elem, elem, sizeof_elem);
		i++;
	}
	return (s);
}
