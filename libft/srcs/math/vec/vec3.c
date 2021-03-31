/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:00:25 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:21:24 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec3f		vec3f(float x, float y, float z)
{
	return ((t_vec3f){x, y, z});
}

t_vec3i		vec3i(int x, int y, int z)
{
	return ((t_vec3i){x, y, z});
}

t_vec3d		vec3d(double x, double y, double z)
{
	return ((t_vec3d){x, y, z});
}
