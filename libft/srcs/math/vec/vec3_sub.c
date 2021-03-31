/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_sub.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:00:17 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:27:02 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"

t_vec3i		vec3i_sub(t_vec3i vec1, t_vec3i vec2)
{
	return ((t_vec3i){vec1.x - vec2.x, vec1.y - vec2.y, vec1.z - vec2.z});
}

t_vec3f		vec3f_sub(t_vec3f vec1, t_vec3f vec2)
{
	return ((t_vec3f){vec1.x - vec2.x, vec1.y - vec2.y, vec1.z - vec2.z});
}

t_vec3d		vec3d_sub(t_vec3d vec1, t_vec3d vec2)
{
	return ((t_vec3d){vec1.x - vec2.x, vec1.y - vec2.y, vec1.z - vec2.z});
}
