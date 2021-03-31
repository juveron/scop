/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:07:25 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:30:37 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*str;

	str = NULL;
	if (s != NULL)
	{
		if ((str = (char *)malloc(len + 1)) == NULL)
			return (NULL);
		ft_strncpy(str, s + start, len);
		str[len] = '\0';
	}
	return (str);
}
