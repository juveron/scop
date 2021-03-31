/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_div.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:47:53 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:26:38 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec3i		vec3i_div(t_vec3i vec1, int div)
{
	return ((t_vec3i){vec1.x / div, vec1.y / div, vec1.z / div});
}

t_vec3f		vec3f_div(t_vec3f vec1, float div)
{
	return ((t_vec3f){vec1.x / div, vec1.y / div, vec1.z / div});
}

t_vec3d		vec3d_div(t_vec3d vec1, double div)
{
	return ((t_vec3d){vec1.x / div, vec1.y / div, vec1.z / div});
}
