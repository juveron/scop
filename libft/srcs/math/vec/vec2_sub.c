/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_sub.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:45:11 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:05:47 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"

t_vec2i		vec2i_sub(t_vec2i vec1, t_vec2i vec2)
{
	return ((t_vec2i){vec1.x - vec2.x, vec1.y - vec2.y});
}

t_vec2f		vec2f_sub(t_vec2f vec1, t_vec2f vec2)
{
	return ((t_vec2f){vec1.x - vec2.x, vec1.y - vec2.y});
}

t_vec2d		vec2d_sub(t_vec2d vec1, t_vec2d vec2)
{
	return ((t_vec2d){vec1.x - vec2.x, vec1.y - vec2.y});
}

t_vec2ui	vec2ui_sub(t_vec2ui vec1, t_vec2ui vec2)
{
	return ((t_vec2ui){vec1.x - vec2.x, vec1.y - vec2.y});
}
