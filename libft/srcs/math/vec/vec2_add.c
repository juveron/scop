/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_add.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juveron <juveron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:41:44 by juveron           #+#    #+#             */
/*   Updated: 2021/03/29 13:05:18 by juveron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"

t_vec2i		vec2i_add(t_vec2i vec1, t_vec2i vec2)
{
	return ((t_vec2i){vec1.x + vec2.x, vec1.y + vec2.y});
}

t_vec2f		vec2f_add(t_vec2f vec1, t_vec2f vec2)
{
	return ((t_vec2f){vec1.x + vec2.x, vec1.y + vec2.y});
}

t_vec2d		vec2d_add(t_vec2d vec1, t_vec2d vec2)
{
	return ((t_vec2d){vec1.x + vec2.x, vec1.y + vec2.y});
}

t_vec2ui	vec2ui_add(t_vec2ui vec1, t_vec2ui vec2)
{
	return ((t_vec2ui){vec1.x + vec2.x, vec1.y + vec2.y});
}
