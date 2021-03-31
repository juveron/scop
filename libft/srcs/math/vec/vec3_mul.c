/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_mul.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:48:28 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:26:52 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec3i		vec3i_mul(t_vec3i vec1, int mul)
{
	return ((t_vec3i){vec1.x * mul, vec1.y * mul, vec1.z * mul});
}

t_vec3f		vec3f_mul(t_vec3f vec1, float mul)
{
	return ((t_vec3f){vec1.x * mul, vec1.y * mul, vec1.z * mul});
}

t_vec3d		vec3d_mul(t_vec3d vec1, double mul)
{
	return ((t_vec3d){vec1.x * mul, vec1.y * mul, vec1.z * mul});
}
