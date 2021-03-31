/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_dot.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:42:51 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:25:10 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"

float	vec2i_dot(t_vec2i vec1, t_vec2i vec2)
{
	return (vec1.x * vec2.x + vec1.y * vec2.y);
}

float	vec2f_dot(t_vec2f vec1, t_vec2f vec2)
{
	return (vec1.x * vec2.x + vec1.y * vec2.y);
}

float	vec2d_dot(t_vec2d vec1, t_vec2d vec2)
{
	return (vec1.x * vec2.x + vec1.y * vec2.y);
}

float	vec2ui_dot(t_vec2ui vec1, t_vec2ui vec2)
{
	return (vec1.x * vec2.x + vec1.y * vec2.y);
}
