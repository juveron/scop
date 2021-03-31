/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:37:19 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 12:47:53 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"
#include "libft_bitsize.h"

long	ft_pow(long nb, size_t e)
{
	double	res;

	res = 1;
	while (e--)
		res *= nb;
	return (res);
}
