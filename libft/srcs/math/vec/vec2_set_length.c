/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_set_length.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:45:01 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:20:58 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec2i		vec2i_set_length(t_vec2i vec1, int len)
{
	t_vec2f	norm;

	norm = vec2i_normalize(vec1);
	return ((t_vec2i){norm.x * (float)len, norm.y * (float)len});
}

t_vec2f		vec2f_set_length(t_vec2f vec1, float len)
{
	t_vec2f	norm;

	norm = vec2f_normalize(vec1);
	return ((t_vec2f){norm.x * (float)len, norm.y * (float)len});
}

t_vec2d		vec2d_set_length(t_vec2d vec1, double len)
{
	t_vec2d	norm;

	norm = vec2d_normalize(vec1);
	return ((t_vec2d){norm.x * (double)len, norm.y * (double)len});
}

t_vec2ui	vec2ui_set_length(t_vec2ui vec1, t_u32 len)
{
	t_vec2f	norm;

	norm = vec2ui_normalize(vec1);
	return ((t_vec2ui){norm.x * (float)len, norm.y * (float)len});
}
