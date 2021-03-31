/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_cross.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:47:02 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:21:34 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"

t_vec3f	vec3f_cross(t_vec3f vec1, t_vec3f vec2)
{
	return ((t_vec3f){vec1.y * vec2.z - vec1.z * vec2.y,
		vec1.z * vec2.x - vec1.x * vec2.z,
		vec1.x * vec2.y - vec1.y * vec2.x});
}

t_vec3i	vec3i_cross(t_vec3i vec1, t_vec3i vec2)
{
	return ((t_vec3i){vec1.y * vec2.z - vec1.z * vec2.y,
		vec1.z * vec2.x - vec1.x * vec2.z,
		vec1.x * vec2.y - vec1.y * vec2.x});
}

t_vec3d	vec3d_cross(t_vec3d vec1, t_vec3d vec2)
{
	return ((t_vec3d){vec1.y * vec2.z - vec1.z * vec2.y,
		vec1.z * vec2.x - vec1.x * vec2.z,
		vec1.x * vec2.y - vec1.y * vec2.x});
}
