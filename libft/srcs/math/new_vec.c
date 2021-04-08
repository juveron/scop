/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_vec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:11:53 by juveron           #+#    #+#             */
/*   Updated: 2021/04/08 11:11:57 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"

t_vec3		new_vec3(float x, float y, float z)
{
	t_vec3	new;

	new.v[0] = x;
	new.v[1] = y;
	new.v[2] = z;
	return (new);
}

t_vec4		new_vec4(float x, float y, float z, float w)
{
	t_vec4	new;

	new.v[0] = x;
	new.v[1] = y;
	new.v[2] = z;
	new.v[3] = w;
	return (new);
}
