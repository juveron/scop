/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 16:50:58 by killian           #+#    #+#             */
/*   Updated: 2021/03/29 10:27:39 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnstr_fd(char *s, size_t n, int fd)
{
	size_t	length;

	length = ft_strlen(s);
	if (n > length)
		write(fd, s, length);
	else
		write(fd, s, n);
}
