/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat_copy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:06:50 by juveron           #+#    #+#             */
/*   Updated: 2021/04/08 11:06:53 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"
#include <stdlib.h>

t_mat4		*mat4_dup(t_mat4 src)
{
	int		i;
	t_mat4	*dst;

	i = -1;
	if (!(dst = (t_mat4*)malloc(sizeof(*dst))))
		return (NULL);
	while (++i < 16)
		dst->m[i] = src.m[i];
	return (dst);
}
