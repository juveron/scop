/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:38:55 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:27:29 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"

t_vec2i		vec2i(int x, int y)
{
	return ((t_vec2i){.x = x, .y = y});
}

t_vec2ui	vec2ui(unsigned int x, unsigned int y)
{
	return ((t_vec2ui){.x = x, .y = y});
}

t_vec2f		vec2f(float x, float y)
{
	return ((t_vec2f){.x = x, .y = y});
}

t_vec2d		vec2d(double x, double y)
{
	return ((t_vec2d){.x = x, .y = y});
}
