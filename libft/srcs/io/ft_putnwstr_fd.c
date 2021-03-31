/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnwstr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 18:10:19 by killian           #+#    #+#             */
/*   Updated: 2021/03/29 10:27:45 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putnwstr_fd(wchar_t *str, size_t n, int fd)
{
	size_t	i;
	size_t	length;

	i = 0;
	length = 0;
	while (i < n && str[i])
	{
		length += ft_putwchar_fd(str[i], fd);
		i++;
	}
	return (length);
}
