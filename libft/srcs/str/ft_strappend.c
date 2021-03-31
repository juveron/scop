/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:02:21 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:28:29 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strappend(char **dst, const char *src)
{
	char	*tmp;

	tmp = ft_strjoin(*dst, src);
	ft_strdel(dst);
	*dst = tmp;
	return (*dst);
}
