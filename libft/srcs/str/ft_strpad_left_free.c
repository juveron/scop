/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpad_left_free.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:05:31 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:29:38 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strpad_left_free(char **as, char const c, t_u32 len)
{
	char	*tmp;

	if (len == 0)
		return ;
	tmp = ft_strpad_left(*as, c, len);
	ft_strdel(as);
	*as = tmp;
}
