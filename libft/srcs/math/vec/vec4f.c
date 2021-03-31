/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:00:34 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:27:07 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <math.h>

t_vec4f	vec4f(float x, float y, float z, float w)
{
	return ((t_vec4f){x, y, z, w});
}

t_vec4f	vec4f_div(t_vec4f vec, float d)
{
	return ((t_vec4f){vec.x / d, vec.y / d, vec.z / d, vec.w});
}

t_vec4f	vec4f_mul(t_vec4f vec, float d)
{
	return ((t_vec4f){vec.x * d, vec.y * d, vec.z * d, vec.w});
}

t_vec4f	vec4f_add(t_vec4f vec1, t_vec4f vec2)
{
	return ((t_vec4f){vec1.x + vec2.x, vec1.y + vec2.y, vec1.z + vec2.z,
		vec1.w});
}

t_vec4f	vec4f_sub(t_vec4f vec1, t_vec4f vec2)
{
	return ((t_vec4f){vec1.x - vec2.x, vec1.y - vec2.y, vec1.z - vec2.z,
		vec1.w});
}
