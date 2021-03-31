/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_length.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:48:20 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:26:50 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"
#include <math.h>

float	vec3i_length(t_vec3i vec1)
{
	return (sqrtf(vec1.x * vec1.x + vec1.y * vec1.y + vec1.z * vec1.z));
}

float	vec3f_length(t_vec3f vec1)
{
	return (sqrtf(vec1.x * vec1.x + vec1.y * vec1.y + vec1.z * vec1.z));
}

float	vec3d_length(t_vec3d vec1)
{
	return (sqrt(vec1.x * vec1.x + vec1.y * vec1.y + vec1.z * vec1.z));
}
