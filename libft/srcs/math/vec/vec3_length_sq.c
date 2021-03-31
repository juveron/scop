/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_length_sq.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:48:14 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:26:47 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	vec3i_length_sq(t_vec3i vec1)
{
	return (vec1.x * vec1.x + vec1.y * vec1.y + vec1.z * vec1.z);
}

float	vec3f_length_sq(t_vec3f vec1)
{
	return (vec1.x * vec1.x + vec1.y * vec1.y + vec1.z * vec1.z);
}

float	vec3d_length_sq(t_vec3d vec1)
{
	return (vec1.x * vec1.x + vec1.y * vec1.y + vec1.z * vec1.z);
}
