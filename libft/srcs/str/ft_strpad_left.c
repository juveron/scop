/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpad_left.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:06:41 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:30:17 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strpad_left(const char *s, char const c, t_u32 n)
{
	t_u32	i;
	t_u32	len;
	char	*result;

	if (!s)
		return (NULL);
	len = n + ft_strlen(s);
	if (!(result = ft_strnew(len)))
		return (NULL);
	i = 0;
	while (i < n)
	{
		result[i] = c;
		++i;
	}
	ft_strlcpy(result + i, s, ft_strlen(s) + 1);
	return (result);
}
