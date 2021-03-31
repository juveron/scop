/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:01:53 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:28:12 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memswap(void *a, void *b, size_t n)
{
	t_u8	*a_tmp;
	t_u8	*b_tmp;
	t_u8	*end;
	t_u8	tmp;

	a_tmp = a;
	b_tmp = b;
	end = (t_u8 *)a + n;
	while (a_tmp < end)
	{
		tmp = *a_tmp;
		*a_tmp = *b_tmp;
		*b_tmp = tmp;
		++a_tmp;
		++b_tmp;
	}
}
