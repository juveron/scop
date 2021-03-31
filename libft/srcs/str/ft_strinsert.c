/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:03:33 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:29:12 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

char	*ft_strinsert(char **dest, char const *src, t_u32 index)
{
	char	*tmp;

	tmp = ft_strsub(*dest, 0, index);
	ft_strappend(&tmp, src);
	ft_strappend(&tmp, (*dest) + index);
	ft_strdel(dest);
	*dest = tmp;
	return (*dest);
}
