/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 11:27:38 by killian           #+#    #+#             */
/*   Updated: 2021/03/29 10:28:03 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putwstr_fd(wchar_t *str, int fd)
{
	size_t	i;
	size_t	length;

	length = 0;
	i = 0;
	while (str[i])
	{
		length += ft_putwchar_fd(str[i], fd);
		i++;
	}
	return (length);
}
