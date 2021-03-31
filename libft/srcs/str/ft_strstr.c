/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:07:16 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:30:33 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	begin;
	size_t	current;

	begin = 0;
	current = 0;
	if (!*s2)
		return ((char *)s1);
	while (s1[begin])
	{
		if (s1[begin + current] == s2[current])
			current++;
		else
		{
			current = 0;
			begin++;
		}
		if (!s2[current])
			return ((char *)(s1 + begin));
	}
	return (NULL);
}
