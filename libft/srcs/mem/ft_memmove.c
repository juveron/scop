/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:01:39 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:28:03 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_tmp;
	unsigned char	*src_tmp;

	dest_tmp = (unsigned char *)dest;
	src_tmp = (unsigned char *)src;
	if (src >= dest)
		ft_memcpy(dest, src, n);
	else
	{
		src_tmp += n;
		dest_tmp += n;
		while (n)
		{
			dest_tmp--;
			src_tmp--;
			*dest_tmp = *src_tmp;
			n--;
		}
	}
	return (dest);
}
