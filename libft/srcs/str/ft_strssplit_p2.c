/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strssplit_p2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:07:03 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:30:27 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	free_error(char ***tab, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
		ft_strdel(&(*tab)[i++]);
	ft_strdel((*tab));
	return (0);
}
