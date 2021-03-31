/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:46:47 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:26:28 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec2f		vec2f(float x, float y)
{
	return ((t_vec2f){x, y});
}

t_vec2i		vec2i(int x, int y)
{
	return ((t_vec2i){x, y});
}

t_vec2d		vec2d(double x, double y)
{
	return ((t_vec2d){x, y});
}

t_vec2ui	vec2ui(t_u32 x, t_u32 y)
{
	return ((t_vec2ui){x, y});
}
