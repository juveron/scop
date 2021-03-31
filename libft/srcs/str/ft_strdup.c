/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:03:22 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:29:05 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size_s;
	char	*new_str;

	size_s = ft_strlen(s);
	if ((new_str = (char *)malloc(size_s + 1)) == NULL)
		return (NULL);
	ft_strcpy(new_str, s);
	return (new_str);
}
