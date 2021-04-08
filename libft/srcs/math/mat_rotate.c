/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:08:00 by juveron           #+#    #+#             */
/*   Updated: 2021/04/08 11:10:12 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"

static t_mat4	get_x_axis_rotation_mat4(float theta)
{
	t_mat4	new;

	new = new_mat4(MAT_IDENTITY);
	new.m[5] = cos(theta);
	new.m[6] = -sin(theta);
	new.m[9] = sin(theta);
	new.m[10] = cos(theta);
	return (new);
}

static t_mat4	get_y_axis_rotation_mat4(float theta)
{
	t_mat4	new;

	new = new_mat4(MAT_IDENTITY);
	new.m[0] = cos(theta);
	new.m[2] = sin(theta);
	new.m[8] = -sin(theta);
	new.m[10] = cos(theta);
	return (new);
}

static t_mat4	get_z_axis_rotation_mat4(float theta)
{
	t_mat4	new;

	new = new_mat4(MAT_IDENTITY);
	new.m[0] = cos(theta);
	new.m[1] = -sin(theta);
	new.m[4] = sin(theta);
	new.m[5] = cos(theta);
	return (new);
}

t_mat4			mat4_rotate(t_mat4 m, float angle, t_axis axis)
{
	t_mat4	new;

	if (axis == X_AXIS)
		new = mat4_mul(m, get_x_axis_rotation_mat4(angle));
	else if (axis == Y_AXIS)
		new = mat4_mul(m, get_y_axis_rotation_mat4(angle));
	else if (axis == Z_AXIS)
		new = mat4_mul(m, get_z_axis_rotation_mat4(angle));
	else
		new = m;
	return (new);
}
