/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_set_length.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:00:13 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:04:42 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec3i		vec3i_set_length(t_vec3i vec1, int len)
{
	t_vec3f	norm;

	norm = vec3i_normalize(vec1);
	return ((t_vec3i){norm.x * (float)len, norm.y * (float)len,
		norm.z * (float)len});
}

t_vec3f		vec3f_set_length(t_vec3f vec1, float len)
{
	t_vec3f	norm;

	norm = vec3f_normalize(vec1);
	return ((t_vec3f){norm.x * (float)len, norm.y * (float)len,
		norm.z * (float)len});
}

t_vec3d		vec3d_set_length(t_vec3d vec1, double len)
{
	t_vec3d	norm;

	norm = vec3d_normalize(vec1);
	return ((t_vec3d){norm.x * (double)len, norm.y * (double)len,
		norm.z * (float)len});
}
