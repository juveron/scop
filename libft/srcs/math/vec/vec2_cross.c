/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_cross.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:42:16 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:22:00 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"

float	vec2f_cross(t_vec2f vec1, t_vec2f vec2)
{
	return (vec1.x * vec2.y - vec1.y * vec2.x);
}

float	vec2i_cross(t_vec2i vec1, t_vec2i vec2)
{
	return (vec1.x * vec2.y - vec1.y * vec2.x);
}

float	vec2d_cross(t_vec2d vec1, t_vec2d vec2)
{
	return (vec1.x * vec2.y - vec1.y * vec2.x);
}

float	vec2ui_cross(t_vec2ui vec1, t_vec2ui vec2)
{
	return (vec1.x * vec2.y - vec1.y * vec2.x);
}
