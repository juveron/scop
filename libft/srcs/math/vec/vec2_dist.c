/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_dist.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:42:37 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:25:04 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	vec2i_dist(t_vec2i vec1, t_vec2i vec2)
{
	return (vec2i_length(vec2i(vec2.x - vec1.x, vec2.y - vec1.y)));
}

float	vec2f_dist(t_vec2f vec1, t_vec2f vec2)
{
	return (vec2f_length(vec2f(vec2.x - vec1.x, vec2.y - vec1.y)));
}

float	vec2d_dist(t_vec2d vec1, t_vec2d vec2)
{
	return (vec2d_length(vec2d(vec2.x - vec1.x, vec2.y - vec1.y)));
}

float	vec2ui_dist(t_vec2ui vec1, t_vec2ui vec2)
{
	return (vec2ui_length(vec2ui(vec2.x - vec1.x, vec2.y - vec1.y)));
}
