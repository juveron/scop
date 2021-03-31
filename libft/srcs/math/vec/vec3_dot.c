/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_dot.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:48:01 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:26:41 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"

float	vec3i_dot(t_vec3i vec1, t_vec3i vec2)
{
	return (vec1.x * vec2.x + vec1.y * vec2.y + vec1.z * vec2.z);
}

float	vec3f_dot(t_vec3f vec1, t_vec3f vec2)
{
	return (vec1.x * vec2.x + vec1.y * vec2.y + vec1.z * vec2.z);
}

float	vec3d_dot(t_vec3d vec1, t_vec3d vec2)
{
	return (vec1.x * vec2.x + vec1.y * vec2.y + vec1.z * vec2.z);
}
